#define SIM_I2C_H
#ifndef SIM_I2C_H

//
#include<Arduino.h>
#include<SIM_I2C.h>

//
#define SIM_I2C_SDA
#define SIM_I2C_SCL

#ifend

class SIM_I2C{
//
public:
void begin(); //
void end(); //
void print(); //
void println(); //
void saveMessage(); //
void deleteMessage(); //
void saveNumber(); //
void deleteNumber(); //
void read(); //
void write(); //
bool call(); //

//
private:
uint8_t password(); //
uint8_t SMS(); //
uint8_t call(); //

};
