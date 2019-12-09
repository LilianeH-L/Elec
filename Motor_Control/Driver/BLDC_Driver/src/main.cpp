#include <Arduino.h>
#include "Spi_Driver.h"
#include "Motor.h"
#include "SerialCom.h"

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

void setup() {
  Serial.begin(9600);
  Serial.println("Starting");
  SPISetup();
  motorSetup();
	delay(2000);
  Serial.println("Setup done");
  // turnMotor(1500, CW);
}

bool toElectrodControl = false;

void loop() {
  // int goalAngle = readSerial();
  // goToAngle(goalAngle);


  //Serial.println(readAngle(false));

  //turnMotor(2000, CCW);
  // testEncoder();
  // Serial.println(readAngle(false));

  //Uncomment to control with electrods
  
  int val = readSerial();
  if (val == - 1){
    toElectrodControl = !toElectrodControl;
    Serial.print("Control switched to : ");
    Serial.println(toElectrodControl ? "Electrod" : "Computer");
  }

  if (toElectrodControl)
    goToAngle(electrodControl());
  

}
