#define SIM_I2C_H
#ifndef SIM_I2C_H

//
#include<Arduino.h>
#include<SIM_I2C.h>

//
#define SIM_I2C_SDA
#define SIM_I2C_SCL

class SIM_I2C{
//
public:
void begin(uint8_t Mode); //
void end(); //
void print(); //
void println(); //
void setClockDivider(); //
void setDataMode(); //
void saveMessage(); //
void deleteMessage(); //
void saveNumber(); //
void deleteNumber(); //
void read(); //
void write(); //
void call(); //

//
private:
void password(); //
void blacklist(); //
};

extern SIM_I2Cclass;
#endif
