#include "Motor.h"

Encoder encoder(encoderPin2, encoderPin1);

void motorSetup() {
	//Motor Setup
	pinMode(resetPin, OUTPUT);
	pinMode(enablePin, OUTPUT);
	pinMode(directionPin, OUTPUT);
	pinMode(brakePin, OUTPUT); //Brake
	//pinMode(6, OUTPUT); //Motor
	pinMode(lockPin, INPUT_PULLUP);
	pinMode(faultPin, INPUT_PULLUP);

	analogWriteResolution(11);
	analogWriteFrequency(motorPin, 23437.5); //Values between 0-2047

	pinMode(13,OUTPUT);
	digitalWrite(13,HIGH);
	digitalWrite(2, LOW); //RESET
	digitalWrite(3, HIGH); //Enable
	digitalWrite(4, HIGH); //DIR
	digitalWrite(5, LOW); //Brake
	// attachInterrupt(digitalPinToInterrupt(faultPin), faultDetected, CHANGE);
}

double readAngle(bool fullTurn=false) {
	double angle =  encoder.read()*countToAngleFactorTest ; //To get degrees
	return angle;
}

void breakMotor(bool toBreak){
	digitalWrite(motorPin, toBreak);
}

void enableMotor(bool toEnable){
	digitalWrite(enablePin, toEnable);
}

void turnMotor(float speed, int dir){
	digitalWrite(directionPin, bool(dir));
	analogWrite(motorPin, speed);
}

void setSpeed(float speed){
	analogWrite(motorPin, speed);
}

void setDirection(int dir){
	digitalWrite(directionPin, dir);
}

void faultDetected(){
	Serial.println("FUCK");
	while(1);
}

void goToAngle(float angle){
	enableMotor(true);
	breakMotor(false);

	//Find direction
	setDirection((angle-readAngle() > 0) ? CW : CCW);
	delay(5000);
	Serial.println(readAngle());

	while(abs(angle - readAngle()) >= 50){
		Serial.println(readAngle());
		setSpeed(500);
	}
	enableMotor(false);
	breakMotor(true);
}