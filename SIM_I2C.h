#ifndef SIM_I2C_H
#define SIM_I2C_H

#include<Arduino.h>
#include<SIM_I2C.h>

#ifend;

#define SIM_I2C_SDA
#define SIM_I2C_SCL

class SIM_I2C{
//
public:
void begin(); //
void end(); //
void print(); //
void println(); //
void save(); //
void deleteMessage(); //
void read(); //
void write(); //

//
private:



};
