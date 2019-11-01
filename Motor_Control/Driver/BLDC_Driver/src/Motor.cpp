#include "Motor.h"

Encoder encoder(encoderPin2, encoderPin1);

void motorSetup() {
	//Motor Setup
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT); //Brake
	pinMode(6, OUTPUT); //Motor
	pinMode(7, INPUT);
	pinMode(8, INPUT);

	analogWriteResolution(11);
	analogWriteFrequency(motorPin, 23437.5); //Values between 0-2047

	digitalWrite(2, LOW); //RESET
	digitalWrite(3, HIGH); //Enable
	digitalWrite(4, HIGH); //DIR
	digitalWrite(5, LOW); //Brake
}

inline double readAngle(bool fullTurn=false) {
	double angle =  encoder.read()*countToAngleFactorTest ; //To get degrees
	return angle;
}