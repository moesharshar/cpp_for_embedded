#ifndef _GPIO_AVR_HPP_
#define _GPIO_AVR_HPP_


#include "GPIO.hpp"

class GPIO_AVR : public GPIO
{
  public:
    void pin_Mode(unsigned char pinNum, unsigned char value);
    unsigned char digital_Read(unsigned char portName);
    void digital_Write(unsigned char pinNum, unsigned char value);
};


#endif