#include <Arduino.h>
#include <PID_v1.h>
#include "Spi_Driver.h"
#include "Motor.h"
#include "SerialCom.h"
#include "testMotor.h"
/*
Taches à faire :
  -Moduler le code en sous-fichier
    -Gestion du DRV8308 (setup des registres, lecture des fautes)
    -Contrôle du moteur
      -Setup
      -Vitesse
      -Direction
    -Lecture encodeur?
  -Lecture commandes du terminal
  -Asservissement du moteur
*/

const int maximumSpeed = 2048;

double Setpoint, Input, Output;
// Tuning parameters
double Kp=4, Kd=30, Ki=0;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, REVERSE);

void setup()
{
  Serial.begin(9600);
  while(!Serial.available());
  Serial.println("Starting");
  SPISetup();
  motorSetup();
  
  Setpoint = 0;

  //tell the PID to range between 0 and the full window size
  myPID.SetOutputLimits(0, maximumSpeed);

  // Turn the PID on
  myPID.SetMode(AUTOMATIC);

  delay(1000);
  Serial.println("Setup done");
}

void loop()
{
  int dir = 0;
  double actualAngle = readAngle();
  Serial.print("angle: ");
  Serial.print(actualAngle);

  double error = 360 - actualAngle;
  
  dir = error > 0 ? 0 : 1;
  
  Input = error > 0 ? error : -1 * error;
  
  Serial.print("\t dir: ");
  Serial.print(dir);
  Serial.print("\t input: ");
  Serial.print(Input);
  
  myPID.Compute();
  turnMotor(Output, dir);
  Serial.print("\t output: ");
  Serial.println(Output);
}
