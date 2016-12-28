#define SIM_I2C_H
#ifndef SIM_I2C_H

//
#include<Arduino.h>
#include<SIM_I2C.h>

//
#define SIM_I2C_SDA
#define SIM_I2C_SCL

#endif

class SIM_I2C{
//
public:
void begin(uint8_t Mode); //
void end(); //
void print(); //
void println(); //
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
