#include <Sparki.h>

void setup()
{
	float desiredHeadway = 10;
	float lineThresh = 750;
	float speed = 80;
	float K = 6;
	//make sure we are looking forwards
	sparki.servo( 0 ); 
	while(true)
	{
		speed = (K*sparki.ping());
		//If there is something REALLY CLOSE in front of us...
		if(((sparki.ping()<5)&&(sparki.ping()!=-(1))))
		{
			//then, stop
			sparki.moveStop();
			sparki.print("STOPPING! \n");
			sparki.updateLCD();
			delay(100);
		}
		else
		{
			//Otherwise, keep speed proportional to headway
			//and follow the line
			if((sparki.lineCenter()<lineThresh))
			{
				sparki.print("FORWARD! \n");
				sparki.updateLCD();
				sparki.driveForwardWait( 0, speed ); 
				delay(100);
			}
			else
			{
				if((sparki.lineLeft()<lineThresh))
				{
					sparki.print("LEFT! \n");
					sparki.spinLeftWait( 0, speed ); 
					delay(100);
				}
				else
				{
				}
				if((sparki.lineRight()<lineThresh))
				{
					sparki.print("RIGHT! \n");
					sparki.updateLCD();
					sparki.spinRightWait( 0, speed ); 
					delay(100);
				}
				else
				{
					//default: go straight slowly
					sparki.driveForwardWait( 0, 50 ); 
				}
			}
		}
		sparki.clearLCD();
		sparki.print("Ultrasonic: ");
		sparki.print(sparki.ping());
		sparki.print("\n");
		sparki.print("lineLeft: ");
		sparki.print(sparki.lineLeft());
		sparki.print("\n");
		sparki.print("lineRight: ");
		sparki.print(sparki.lineRight());
		sparki.print("\n");
		sparki.print("lineCenter: ");
		sparki.print(sparki.lineCenter());
		sparki.print("\n");
		sparki.print("Speed: ");
		sparki.print(speed);
		sparki.print("\n");
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
