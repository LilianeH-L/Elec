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
	delay(500);
  Serial.println("Setup done");
}

bool toElectrodControl = false;

void loop() {
  // Pour tester les moteurs
	enableMotor(true);
	breakMotor(false);
	digitalWrite(directionPin, LOW);
	analogWrite(motorPin, 500);
  Serial.println(readAngle(false));
}