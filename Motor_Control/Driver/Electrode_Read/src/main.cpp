/*
 * Code pour lire une elctrode sur le bicep.
 * Met comPin a HIGH lors de la flexion et LOW lors de l'extension
 * Code de Nic
 */

#include <Arduino.h>
int comPin = 18;
int biceps;
int delay_time = 10;

bool up = false;
int upcnt = 0;
int upThres = 275;
int upCountThres = 200;
int upDelay = 1500;

int downcnt = 0;
int downThres = 800;
int downCountMaxThres = 30;
int downDelay = 2500;
int downCountThres = 750;

int maxCount = 0;
bool maxReached = false;
int maxThres = 950;
int maxCountThres = 300;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(comPin, OUTPUT);
  digitalWriteFast(13, up);
  delay(1000);
}


void loop() {

  biceps = analogRead(15);
  //auto triceps = analogRead(16);

  Serial.print(biceps);
  Serial.print("\t");
  //Serial.println(triceps);

  // Conditions to lower
  if (up)
  {
    Serial.println("up");
    if (biceps < downThres)
      downcnt++;
    else 
      downcnt = 0;

    
    //Check max has been reached
    if(biceps > maxThres)
      maxCount++;
    else
      maxCount = 0;

    if (maxCount > maxCountThres / delay_time)
      maxReached = true;


    if (downcnt>downCountMaxThres/delay_time && maxReached)
    {
      downcnt = 0;
      maxCount = 0;
      up = false;
      maxReached = false;
      digitalWrite(comPin, up);
      digitalWrite(13, up);
      delay(downDelay);
    }
    
    if(downcnt > downCountThres / delay_time){
      downcnt = 0;
      maxCount = 0;
      up = false;
      maxReached = false;
      digitalWrite(comPin, up);
      digitalWrite(13, up);
    }


  }

  // Conditions to go up
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
      delay(upDelay);
    }    
  }
  delay(delay_time);
}