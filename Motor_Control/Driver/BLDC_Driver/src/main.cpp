#include <Arduino.h>
#include "Spi_Driver.h"
#include "Motor.h"

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
}

void loop() {
	digitalWrite(directionPin, HIGH);
	digitalWrite(enablePin, HIGH);
	digitalWrite(brakePin, LOW);
	analogWrite(motorPin, 500);
	// unsigned long currentMillis = millis();
	// unsigned long targetMillis = currentMillis+2000;

	// Serial.println(encoder.read());
	// while (currentMillis < targetMillis);
	// {
	// Serial.println(encoder.read()*countToAngleFactor);
		
	// }
	
	// //delay(2000);

	// digitalWrite(enablePin, LOW);
	// digitalWrite(brakePin, HIGH);
	// delay(100);

	// digitalWrite(directionPin, LOW);
	// digitalWrite(enablePin, HIGH); 
	// digitalWrite(brakePin, LOW);
	// analogWrite(motorPin, 500);
	// Serial.println(encoder.read());

	// delay(2000);

	// digitalWrite(enablePin, LOW);
	// digitalWrite(brakePin, HIGH);
	// delay(100);

}
