#ifndef _GPIO_ARM_HPP_
#define _GPIO_ARM_HPP_


#include "GPIO.hpp"

class GPIO_ARM : public GPIO
{
  public:
    void pin_Mode(unsigned char pinNum, unsigned char value);
    unsigned char digital_Read(unsigned char pinNum);
    void digital_write(unsigned char pinNum, unsigned char value);
};


#endif