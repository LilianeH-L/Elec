#include <Arduino.h>
#include <Wire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start Serial for output

}

void loop() {


 Wire.setSDA(18);
 Wire.setSCL(19);

  
  Wire.requestFrom(18, 1);
  while(Wire.available()) {
    char c = Wire.read();
    Serial.print(c); 
    }
   delay(500);
}
