//
// Created by Sergey on 21.11.2019.
//

#ifndef REGISTERS_INTERRUPTHANDLER_HPP
#define REGISTERS_INTERRUPTHANDLER_HPP

#include <array>
#include "tim2registers.hpp"  //for TIM2
#include "gpiocregisters.hpp"  //for TIM2
#include "ledsIndicator.h" 
#include "adc.h"
#include "Button.h"
#include "usart2registers.hpp"
#include "stdio.h"

class InterruptHandler 
{
public:
  static void DummyHandler() 
  { 
    for(;;) 
    {
    } 
  }
  
  static void Usart2InterruptHandler()
  {
    double sendValue = ledsIndicator.GetDispValue();
    char TBuff[200];
    sprintf(TBuff," %3.4f \n",sendValue);
    
    static const uint16_t size = std::strlen(TBuff);
    static char buff;
    buff = USART2::DR::Get();
    for(int k =0; k<size; k++)
    {
      USART2::DR::Write(TBuff[k]);
      while(!USART2::SR::TXE::Value1::IsSet())
      {
      }
    }
  }
  
  
  static void TimerHandler()
  {
    ITimerInterrupted& timer=ledsIndicator.GetTimer();
    if (timer.IsOverFlowed())
    {
      static bool f =true;
      if(f)
      {
        f=false;
        adc1.UpdateRefVoltage();
        
      }
      //       double v0= adc1.GetVoltage();
      //       double t_0 =(v0-0.76)/0.0025+25;
      
      static uint16_t CAL1 = *reinterpret_cast<uint16_t*>(0x1FFF7A2C);
      static uint16_t CAL2 = *reinterpret_cast<uint16_t*>(0x1FFF7A2E);
      static double t1=30;
      static double t2 = 110;
      
      adc1.Start();
      
      uint16_t c= adc1.GetCode();
      double v = adc1.GetVoltage();
      double t=t1+(t2-t1)/(CAL2-CAL1)*(c-CAL1);
      
      if(flagIndicatorSwitch)
      {
        ledsIndicator.Update(t, 23,27);
        
      }
      else
      {
        ledsIndicator.Update(v, 0,adc1.GetRefVoltage());
      }
    }
  }
};

#endif //REGISTERS_INTERRUPTHANDLER_HPP
