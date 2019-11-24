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
Encoder knob1(14, 15);
Encoder knob2(7, 8);
Encoder knob3(2, 3);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
  Serial.println("TwoKnobs Encoder Test:");
}

long position1  = -999;
long position2 = -999;
long position3 = -999;
//bool debut = true;
//unsigned long t_debut = 0;
//unsigned long pos = 0;

void loop() {
  long new1, new2, new3;
  new1 = knob1.read()*360/1600; // 1600 pics/tour convertis en degrés
  new2 = knob2.read();
  new3 = knob3.read();
  
  if (new1 > 360){
    new1 = new1%360; //modulo 360
    }
  else if (new1 < 0){
    new1 = new1%360 + 360;
  }
  if (new2 > 360){
    new2 = new2%360; //modulo 360
  }
  else if (new2 < 0){
    new2 = new2%360 + 360;
    }
  if (new3 > 360){
    new3 = new3%360; //modulo 360
  }
  else if (new3 < 0){
    new3 = new3%360 + 360;
    }
  
    
  if (new1 != position1 || new2 != position2 || new3 != position3) {
//    if (debut == true) {
//      t_debut = millis();
//      debut = false;
//      }
//    unsigned long temps = millis() - t_debut;
    Serial.print('#');
//    Serial.print("1 = ");
    Serial.print(new1);
//    //Serial.print(", 2 = ");
    Serial.print(new2);
    Serial.print(new3);
//    Serial.print(" Time = ");
//    Serial.print(temps);
//    Serial.println();
    position1 = new1;
    position2 = new2;
    position3 = new3;
  }
  
  // if a character is sent from the serial monitor,
  // send a signal to indicate the end of the measure
  if (Serial.available()) {
    Serial.read();
    Serial.print('%');
    knob1.write(0);
    knob2.write(0);
    knob3.write(0);
  }
}
