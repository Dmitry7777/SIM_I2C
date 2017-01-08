//
#define SIM_I2C_H
#ifndef SIM_I2C_H

//
#include<Arduino.h>
#include<SIM_I2C.h>
#include"Arduino.h"
#include"SIM_I2C.h"

//
#define SIM_I2C_SDA
#define SIM_I2C_SCL

class SIM_I2C{
//
public:
SIM_I2C(uint8_t SIM_I2C_SDA, uint8_t SIM_I2C_SCL); //
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
void account(); //
bool check(); //
bool verify(); //

//
protected:
bool password(); //
};

extern SIM_I2Cclass;
#endif
