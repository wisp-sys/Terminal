//#include <cstdint>            //for int types such as uint32_t
#include "gpioaregisters.hpp" //for Gpioa
#include "gpiocregisters.hpp" //for Gpioc
#include "gpiobregisters.hpp" //for Gpiob
#include "rccregisters.hpp"   //for RCC
#include "tim2registers.hpp"   //for SPI2
#include "nvicregisters.hpp"  //for NVIC
#include "ledsIndicator.h" 
#include "Button.h"
#include "led.h" 
#include "adc.h" 
#include "usart2registers.hpp"
using namespace std ;

constexpr uint32_t BaudRate=9600;
extern "C"
{
int __low_level_init(void)
{
  RCC::AHB1ENR::GPIOAEN::Enable::Set();
  RCC::APB1ENR::USART2EN::Enable::Set();
  GPIOA::MODER::MODER3::Alternate::Set();
  GPIOA::MODER::MODER2::Alternate::Set();
  GPIOA::AFRL::AFRL3::Af7::Set();
  GPIOA::AFRL::AFRL2::Af7::Set();
  GPIOA::PUPDR::PUPDR2::NoPullUpNoPullDown::Set();
  GPIOA::PUPDR::PUPDR3::PullUp::Set();
  USART2::CR1::OVER8::Value0::Set();
  USART2::CR1::M::Value0::Set();
  USART2::CR2::STOP::Value0::Set();
  USART2::CR1::PCE::Value0::Set();
  USART2::CR1::TE::Value1::Set();
  USART2::CR1::RE::Value1::Set();
  NVIC::ISER1::Write(1<<6);
  //USART2::CR1::TXEIE::Value1::Set();
  USART2::CR1::RXNEIE::Value1::Set();
 
  uint32_t USART_DIV=16'000'000/(BaudRate*8*(2 - USART2::CR1::OVER8::Get()));
  USART2::BRR::DIV_Mantissa::Set(USART_DIV);
  
  
   
  
  
NVIC::ISER0::Write(1 << 28);
   return 1;
}
}

int main()
{
 adc1.Enable();
 ledsIndicator.Enable();
 ledsIndicator.Start();
 USART2::CR1::UE::Value1::Set();
  for(;;)    
  {
    if(button.WasPressed())
    {
      flagIndicatorSwitch=!flagIndicatorSwitch;
    }
  }
}

