/*
 * Code pour lire une elctrode sur le bicep.
 * Met comPin a HIGH lors de la flexion et LOW lors de l'extension
 * Code de Nic
 */

#include <Arduino.h>

int upcnt = 0;
int downcnt = 0;
int delay_time = 10;
bool up = false;


int upThres = 250;
int upCountThres = 500;

int downThres = 550;
int downCountThres = 500;

int comPin = 18;
int biceps;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(comPin, OUTPUT);
  digitalWriteFast(13, HIGH);
  delay(1000);
}


void loop() {

  biceps = analogRead(15);
  //auto triceps = analogRead(16);
  Serial.print(biceps);
  Serial.print("\t");
  //Serial.println(triceps);

  if (up)
  {

    Serial.println("up");
    if (biceps < downThres)
      downcnt++;
    else 
      downcnt = 0;

    if (downcnt > downCountThres / delay_time)
    {
      up = false;
      digitalWrite(comPin, up);
      digitalWrite(13, up);
    }
    
  }
  else
  {
    Serial.println("down");

    if (biceps > upThres)
      upcnt++;
    else 
      upcnt = 0;

    if (upcnt > upCountThres / delay_time)
    {
      up = true;
      digitalWrite(comPin, up);
      digitalWrite(13, up);
    }
  }
  delay(delay_time);
}