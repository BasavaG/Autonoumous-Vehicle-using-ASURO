#include "asuro.h"

/********* Start - Motor library for autonomous robot *********/
#define FULL_SPEED 255
#define HALF_SPEED 128
#define ZERO_SPEED 0

// Motor FWD
void moveFwd(void)
{
	MotorDir(FWD,FWD);
	MotorSpeed(FULL_SPEED,FULL_SPEED);
}

// Motor RWD
void moveRwd(void)
{
	MotorDir(RWD,RWD);
	MotorSpeed(FULL_SPEED,FULL_SPEED);
}

// Turn Left
void turnLeft(void)
{
	MotorDir(RWD,FWD);
	MotorSpeed(FULL_SPEED,HALF_SPEED);
}

// Turn Right
void turnRight(void)
{
	MotorDir(FWD,RWD);
	MotorSpeed(HALF_SPEED, FULL_SPEED);
}

// Motor Stop
void Stop(void)
{
	MotorSpeed(0,0);
}

/********* End - Motor library for autonomous robot *********/

/********* Start - Main loop *********/
int main (void)
{
	Init();
	unsigned int i;
	unsigned char sw;

	

	// Auto Drive
	while(1)
	{
		
		sw = PollSwitch();
		
		if (sw == 0)	// normal condition, without any collision
		{
			moveFwd(); // robot moves in forward direction
			StatusLED(GREEN);
			
		}
		else if (sw>0)
		{
			Stop();	
			StatusLED(RED);
			if (sw & 0x08)	// Collision in left switches 
			{
				turnRight();	// robot moves in right direction
				
			}
			if (sw & 0x07)	// Collision in right switches
			{
				turnLeft();	// robot moves in left direction
				
			}
			for(i = 0; i < 280; i++) { Sleep(255); } 
		}
	}
	return 0;
}
/********* End - Main loop *********/