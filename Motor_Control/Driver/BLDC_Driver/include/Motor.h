#ifndef Motor_h
#define Motor_h

#include <Encoder.h>

#define CW 1
#define CCW 0

void motorSetup();

//Parameters
void breakMotor(bool toBreak);
void enableMotor(bool toEnable);
void setDirection(int dir);
void setSpeed(float speed);
void faultDetected();

//Motor movements
void turnMotor(float speed, int dir);
void stopMotor();

//Encoder
double readAngle();
void resetAngle();
void setAngle(float angle);

// Controller
void goToAngleNoSpeed(float angle);
void goToAngle(float angleTest, float speedTest, bool dir);
void turnTimer(float speed, int dir, unsigned long timeToTurn);

//Pins
const int resetPin = 2;
const int enablePin = 3;
const int directionPin = 4;
const int brakePin = 5;
const int motorPin = 6;
const int lockPin = 7;
const int faultPin = 8;
const int encoderPin1 = 0, encoderPin2 = 1;

const int comPin = 19; //When controlled by electrods

//Encoder reading
const double gearReduction = 1; //100 with gearbox, 1 without
const double encoderResolution = 1; //4 for the small motor
const double countsPerTurn = 3200; //small motor 4096
const double countToAngleFactor = 360 / (countsPerTurn * gearReduction * encoderResolution);

//Motor controls
const int pulseMax = 2047;
const int pulseMin = 100;
const int turnCW = 1;
const int turnCCW = 2;

//controls


#endif