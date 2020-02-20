#include "Motor.h"

Encoder encoder(encoderPin2, encoderPin1);
elapsedMillis timeInterval;
int speed = 500;

void motorSetup()
{
	//Motor Setup
	pinMode(resetPin, OUTPUT);
	pinMode(enablePin, OUTPUT);
	pinMode(directionPin, OUTPUT);
	pinMode(brakePin, OUTPUT); //Brake
	pinMode(lockPin, INPUT_PULLUP);
	pinMode(faultPin, INPUT_PULLUP);

	analogWriteResolution(11);
	analogWriteFrequency(motorPin, 23437.5); //Values between 0-2047

	pinMode(13, OUTPUT);
	digitalWrite(13, HIGH);
	digitalWrite(2, LOW);  //RESET
	digitalWrite(3, HIGH); //Enable
	digitalWrite(4, HIGH); //DIR
	digitalWrite(5, LOW);  //Brake
	attachInterrupt(digitalPinToInterrupt(faultPin), faultDetected, CHANGE);

	//When controlled by electrods
	pinMode(19, INPUT_PULLDOWN); //Connected to COM pin of the other board
	pinMode(18, OUTPUT);
	digitalWrite(18, LOW);
}

//Parameters
void breakMotor(bool toBreak)
{
	digitalWrite(brakePin, toBreak);
}

void enableMotor(bool toEnable)
{
	digitalWrite(enablePin, toEnable);
}

void setDirection(int dir)
{
	digitalWrite(directionPin, dir);
}

void setSpeed(float speed)
{
	analogWrite(motorPin, speed);
}

void faultDetected()
{
	Serial.println("FUCK");
	while (1)
		;
}

//Motor movements
void turnMotor(float speed, int dir)
{
	enableMotor(true);
	breakMotor(false);
	digitalWrite(directionPin, bool(dir));
	analogWrite(motorPin, speed);
}

void stopMotor()
{
	enableMotor(false);
	breakMotor(true);
}

//Encoder
double readAngle()
{
	double angle = encoder.read() * countToAngleFactor; //To get degrees
	return angle;
}

void resetAngle()
{
	Serial.println("Angle reset to 0");
	encoder.write(0);
}

void setAngle(float angle)
{
	double count = angle / 360 * countsPerTurn * gearReduction * encoderResolution;
	encoder.write(count);
}

//Controller
void goToAngle(float angle)
{
	bool printAngle = false;

	//Find direction
	int dir = ((angle - readAngle() > 0) ? CCW : CW);

	if (printAngle)
	{
		Serial.print("Angle to go: ");
		Serial.print(angle);
		Serial.print("\tCurrent Angle : ");
		Serial.print(readAngle());
	}

	int error = abs(angle - readAngle());

	if (error >= 1)
	{
		if (printAngle)
		{
			Serial.print("\t Goal not reached : ");
			Serial.println(readAngle());
		}
		turnMotor(speed, dir);
		error = abs(angle - readAngle());
	}

	else
	{
		if (printAngle)
		{
			Serial.print("\tGoal reached, angle :");
			Serial.println(readAngle());
		}
		stopMotor();
	}
}

// Only works for the first loop ...
void turnTimer(float speed, int dir, unsigned long timeToTurn)
{
	enableMotor(true);
	breakMotor(false);

	setDirection(dir);
	setSpeed(speed);

	timeInterval = 0;

	while (timeInterval <= timeToTurn)
	{
		Serial.println(millis());
	}

	timeInterval = 0;

	Serial.print("Final position : ");
	Serial.println(readAngle());

	breakMotor(true);
	enableMotor(false);
}

float electrodControl()
{
	float goalAngle = -90;
	speed = 1000;
	bool state = digitalRead(comPin);
	// Serial.print("Com state : ");
	// Serial.println(state);
	if (state)
	{
		return goalAngle;
	}
	else
		return 0;
}