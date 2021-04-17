#include <Arduino.h>
#include <PID_v1.h>
#include "Spi_Driver.h"
#include "Motor.h"
#include "SerialCom.h"
#include "testMotor.h"
#include "PID.h"

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

void setup()
{
  Serial.begin(9600);
  //while (!Serial.available());
  Serial.println("Starting");
  SPISetup();
  motorSetup();
  double Angle_initial=180; 
  PIDsetup(Angle_initial);

  Serial.println("Setup done");
}

double initialAngle=readAngle();
double angleTest=90;
double speedTest=20;
void loop()
{
  //Serial.print(initialAngle);
  PIDangle();
  // testIncrementSpeedToAngle(angleTest);
  // testTurnCounterClockWise( angleTest, speedTest);
  //testIncrementSpeedToAngle(angleTest);
 
 //Serial.print(readAngle());

}
