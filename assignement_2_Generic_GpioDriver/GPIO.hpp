#ifndef _GPIO_HPP_
#define _GPIO_HPP_


class GPIO
{
  public:
    virtual unsigned char digital_Read(unsigned char portName) = 0;
    virtual void digital_Write(unsigned char pinNum, unsigned char value) = 0;
    virtual void pin_Mode(unsigned char pinNum, unsigned char value) = 0;
};


#endif