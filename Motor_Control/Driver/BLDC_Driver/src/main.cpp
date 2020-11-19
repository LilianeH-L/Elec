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
//tuning parameters
double Kp=20, Kd=0.5, Ki=0;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void PIDsetup()
{
  Setpoint = 180;

  //tell the PID to range between -2048 and 2048
  myPID.SetOutputLimits(-maximumSpeed, maximumSpeed);

  myPID.SetSampleTime(3);

  //turn the PID on
  myPID.SetMode(AUTOMATIC);
}

unsigned int prevTime = 0;
void PIDangle()
{
  int dir = 0;
  double actualAngle = readAngle(); 
  Input = actualAngle;
  
  myPID.Compute();
  
  dir = Output > 0 ? 0 : 1;
  turnMotor(abs(Output), dir);

  unsigned int time = millis();
  if(time - prevTime > 100) {
    Serial.print("angle: ");
    Serial.print(actualAngle);
    Serial.print("\t dir: ");
    Serial.print(dir);
    Serial.print("\t input: ");
    Serial.print(Input);
    Serial.print("\t output: ");
    Serial.println(Output);
    prevTime = time;
  }
}

void setup()
{
  Serial.begin(9600);
  while (!Serial.available());
  Serial.println("Starting");
  SPISetup();
  motorSetup();
  
  PIDsetup();

  Serial.println("Setup done");
}
double angleTest=60;
void loop()
{
  PIDangle();
  testIncrementSpeedToAngle(angleTest);
}
