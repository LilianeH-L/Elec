/* Encoder Library - TwoKnobs Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */
#define ENCODER_OPTIMIZE_INTERRUPTS
#include <Encoder.h>

// Change these pin numbers to the pins connected to your e ncoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder knob1(14, 15);
Encoder knob2(7, 8);
Encoder knob3(2, 3);
//   avoid using pins with LEDs attached
int pinOI=9;
void setup() {
  Serial.begin(9600);
  Serial.println("Salut toi");
  pinMode(pinOI, INPUT);
}

int position1  = -999;
int position2 = -999;
int position3 = -999;
//bool debut = true;
//unsigned long t_debut = 0;
//unsigned long pos = 0;

void loop() {
  int new1, new2, new3;
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
    Serial.print('#');
//    Serial.print("1 = ");
    byte new1Byte1 = new1 & 0b11111111;
    byte new1Byte2= new1 >>8;
    Serial.write(new1Byte1);
    Serial.write(new1Byte2);
//    //Serial.print(", 2 = ");
    byte new2Byte1 = new2 & 0b11111111;
    byte new2Byte2= new2 >>8;
    Serial.write(new2Byte1);
    Serial.write(new2Byte2);
//    //Serial.print(", 3 = ");
    byte new3Byte1 = new3 & 0b11111111;
    byte new3Byte2= new3 >>8;
    Serial.write(new3Byte1);
    Serial.write(new3Byte2);

    position1 = new1;
    position2 = new2;
    position3 = new3;
  }
  
  // if a character is sent from the serial monitor,
  // send a signal to indicate the end of the measure
  /*if (Serial.available()) {
    Serial.read();
    Serial.print('%');
    knob1.write(0);
    knob2.write(0);
    knob3.write(0);
  }*/
  if(digitalRead(pinOI)==HIGH){
     Serial.print("%");
     exit(0);
  }
  
}
