/* Encoder Library - TwoKnobs Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */
#define ENCODER_OPTIMIZE_INTERRUPTS
#include <Encoder.h>

// Change these pin numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder knobLeft(14, 15);
//Encoder knobRight(7, 8);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
  Serial.println("TwoKnobs Encoder Test:");
}

long positionLeft  = -999;
//long positionRight = -999;
debut = true;

void loop() {
  long newLeft; //, newRight;
  newLeft = knobLeft.read()*360/1600; // 1600 pics/tour convertis en degrés
  //newRight = knobRight.read();
  if (newLeft > 360)
    newLeft = newLeft%360; //modulo 360
  else if (newLeft < 0)
    newLeft = newLeft%360 + 360;
  if (newLeft != positionLeft) { //|| newRight != positionRight) {
    if (debut == true) {
      t_debut = millis();
      debut = false;
      }
    temps = millis() - temps_debut;
    Serial.print("Left = ");
    Serial.print(newLeft);
    //Serial.print(", Right = ");
    //Serial.print(newRight);
    Serial.print("Time = ");
    Serial.print(temps);
    Serial.println();
    positionLeft = newLeft;
    //positionRight = newRight;
    Ser 
  }
  // if a character is sent from the serial monitor,
  // reset both back to zero.
  if (Serial.available()) {
    Serial.read();
    Serial.println("Reset both knobs to zero");
    knobLeft.write(0);
    //knobRight.write(0);
  }
}
