#pragma once
#include <cstdint> // for uint8_t
#include "gpiocregisters.hpp" // for GPIOC
#include "gpioaregisters.hpp" // for GPIOC
#include "adc1registers.hpp"
#include "rccregisters.hpp"   //for RCC
#include "adccommonregisters.hpp"

class IADC
{
public: 
   void virtual Enable() = 0;
   void virtual Start() = 0;
   bool virtual IsCovertionCompleted()=0;
   void virtual Stop() = 0;
   double virtual GetVoltage() = 0;
   uint16_t virtual Get() = 0;
   uint16_t virtual GetCode() = 0;
   double virtual GetRefVoltage()=0;
   double virtual UpdateRefVoltage()=0;
   
};

class ADC: public IADC
{
  uint32_t numOfBits=4096;
  double voltageRef=3.3;
public:
  
  void Enable() override
  {
    RCC::APB2ENR::ADC1EN::Enable::Set();
    ADC1::CR1::RES::Value0::Set();
    ADC1::CR1::SCAN::Value1::Set();
    ADC1::CR2::CONT::Value0::Set();
    ADC1::CR2::EOCS::Value1::Set();
    ADC1::SQR1::L::Value1::Set();
    ADC1::SQR3::SQ1::Value16::Set();
    ADC1::SQR3::SQ2::Value0::Set();
    
   // ADC1::SMPR2::SMP1_0::Value4::Set();
    ADC1::SMPR2::Write(7|(7<<3));
    
//    RCC::APB2ENR::ADC1EN::Enable::Set();
//    ADC1::CR1::RES::Value0::Set();
//    ADC1::CR2::CONT::Value0::Set();
//    ADC1::CR2::EOCS::Value0::Set();
//    ADC1::SQR1::L::Value0::Set();
//    ADC1::SQR3::SQ1::Value16::Set();
//    ADC1::SMPR2::Write(4);
    
    ADC_Common::CCR::TSVREFE::Value1::Set();
    
    ADC1::CR2::ADON::Value1::Set();
    RCC::AHB1ENR::GPIOAEN::Enable::Set();
    GPIOA::MODER::MODER0::Analog::Set();
  }
   void Start() override
   {
     ADC1::CR2::SWSTART::Value1::Set();
   }
   bool IsCovertionCompleted() override
   {
     return ADC1::SR::EOC::Value1::IsSet();
   }
   void Stop() override
   {
     ADC1::CR2::ADON::Value0::Set();
   }
   double GetVoltage() override
   {
    while(!ADC1::SR::EOC::Value1::IsSet())
    {
    }
    return voltageRef/numOfBits*ADC1::DR::Get();
   }
  uint16_t Get() override
  {
    return ADC1::DR::Get();
  }
  
  uint16_t GetCode() override
  {
    while(!ADC1::SR::EOC::Value1::IsSet())
    {
    }
    return ADC1::DR::Get();
  }
  double GetRefVoltage() override
  {
    return voltageRef;
  }
  double UpdateRefVoltage() override
  {
    ADC1::CR2::ADON::Value0::Set();
    auto currentChannel=ADC1::SQR3::SQ1::Get();
    ADC1::SQR3::SQ1::Value17::Set();
    ADC1::CR2::ADON::Value1::Set();
    ADC1::CR2::SWSTART::Value1::Set();
    while(!ADC1::SR::EOC::Value1::IsSet())
    {
    }
    uint16_t VrefADU = ADC1::DR::Get();
    ADC1::CR2::ADON::Value0::Set();
    ADC1::SQR3::SQ1::Set(currentChannel);
    ADC1::CR2::ADON::Value1::Set();
    uint16_t VrefADU_default = *reinterpret_cast<uint16_t*>(0x1FFF7A2A);
    voltageRef = 3.3*VrefADU_default/VrefADU;
    return voltageRef;
  }
  
};

inline ADC adc1;