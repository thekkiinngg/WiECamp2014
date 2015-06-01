#include <Sparki.h>

void setup()
{
	float desiredHeadway = 15;
	float lineThresh = 750;
	//make sure we are looking forwards
	sparki.servo( 0 ); 
	while(true)
	{
		//If there is something in front of us...
		if(((sparki.ping()<desiredHeadway)&&(sparki.ping()!=-(1))))
		{
			//then, stop
			sparki.moveStop();
			sparki.print("STOPPING! \n");
			sparki.updateLCD();
			delay(100);
		}
		else
		{
			//Otherwise, follow the line
			if((sparki.lineCenter()<lineThresh))
			{
				sparki.print("FORWARD! \n");
				sparki.updateLCD();
				sparki.driveForwardWait( 0, 80 ); 
				delay(100);
			}
			else
			{
				if((sparki.lineLeft()<lineThresh))
				{
					sparki.print("LEFT! \n");
					sparki.spinLeftWait( 0, 80 ); 
					delay(100);
				}
				else
				{
				}
				if((sparki.lineRight()<lineThresh))
				{
					sparki.print("RIGHT! \n");
					sparki.updateLCD();
					sparki.spinRightWait( 0, 80 ); 
					delay(100);
				}
				else
				{
					//default: go straight
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
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
