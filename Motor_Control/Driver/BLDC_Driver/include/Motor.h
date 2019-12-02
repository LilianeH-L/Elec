#ifndef Motor_h
#define Motor_h

#include <Encoder.h>

#define CW 1
#define CCW 0

void motorSetup();

//Paramètres
void breakMotor(bool toBreak);
void enableMotor(bool toEnable);
void setDirection(int dir);
void setSpeed(float speed);
void faultDetected();

//Motor movements
void turnMotor(float speed, int dir);
void stopMotor();

//Encoder
double readAngle(bool fullTurn);
void resetAngle();
void setAngle(float angle);
void testEncoder();

// Controller
void goToAngle(float angle);
void turnTimer(float speed, int dir, unsigned long timeToTurn);
float electrodControl();

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

//Lecture de l'encoder
const double gearReduction = 100; //100 with gearbox, 1 without
const double encoderResolution = 4;
const double countsPerTurn = 4096;
const double countToAngleFactorTest = 360 / (countsPerTurn*gearReduction*encoderResolution);

//Controle du moteur
const int pulseMax = 2047;
const int pulseMin = 100;
const int turnCW = 1;
const int turnCCW = 2;

#endif