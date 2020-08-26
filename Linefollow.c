#inlcude <asuro.h>
int main(void)
{

	unsigned int data[2]; //Allocate storage

	Init();  			//This function will reset the microprocessor to its initial state

	FrontLED(ON);		//Switch ON line trace illumination

	MotorDir(FWD,FWD);  //Motor will move forward 

	while(1){			//Ethernal loop

	LineData(data);		//Reading the brightness of data from phototransistor

	if(data[0]>data[1])  //Left brigher than right 
	{
	MotorSpeed(200,150);	//Speed up left motor
	}

	else{
	MotorSpeed(150,200);   //Speed up right motor
	}
	
	
	}
	return 0;
}
