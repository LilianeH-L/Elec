#ifndef SerialCom_H
#define SerialCom_H

#include "Motor.h"
#include "Spi_Driver.h"
#include <Arduino.h>


int readSerial();
void executeCommand(String command);

#endif