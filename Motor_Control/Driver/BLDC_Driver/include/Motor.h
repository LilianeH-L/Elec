#include <Encoder.h>

void motorSetup();
double readAngle(bool fullTurn);

//Pins
const int resetPin = 2;
const int enablePin = 3;
const int directionPin = 4;
const int brakePin = 5;
const int motorPin = 6;
const int lockPin = 7;
const int faultPin = 8;
const int encoderPin1 = 0, encoderPin2 = 1;

//Lecture de l'encoder
const double gearReduction = 1; //100 with gearbox, 1 without
const double encoderResolution = 4;
const double countsPerTurn = 800;
const double countToAngleFactorTest = 360 / (countsPerTurn*gearReduction*encoderResolution);

//Controle du moteur
const int pulseMax = 2047;
const int pulseMin = 100;
const int turnCW = 1;
const int turnCCW = 2;