#include <Sparki.h>

void setup()
{
	float uss = sparki.ping();
	float distThresh = 15;
	while(true)
	{
		//Look straight ahead to start
		sparki.servo( 0 ); 
		//If there is something in front of Sparki less than distThres cm away...
		if((uss<distThresh))
		{
			//...and if the reading is not -1 (means nothing is seen)...
			if((uss!=-(1)))
			{
				//Then stop and look to the left side to see if there is room to pass
				sparki.moveStop();
				sparki.servo( -(45) ); 
				delay(100);
				//Now, if we still see something, just stay here and wait for the guy to move
				if((sparki.ping()<(distThresh+45)))
				{
				}
				else
				{
					//otherwise, the way is clear to pass, so do a passing maneuver
					sparki.servo( 0 ); 
					sparki.spinLeftWait( 45, 80 ); 
					sparki.driveForwardWait( 180, 80 ); 
					sparki.spinRightWait( 45, 80 ); 
					sparki.driveForwardWait( 180, 80 ); 
					sparki.spinRightWait( 45, 80 ); 
					sparki.driveForwardWait( 180, 80 ); 
					sparki.spinLeftWait( 45, 80 ); 
				}
			}
			else
			{
			}
		}
		else
		{
			sparki.driveForwardWait( 0, 80 ); 
		}
		sparki.clearLCD();
		sparki.print(uss);
		sparki.updateLCD();
		uss = sparki.ping();
		delay(100);
	}
}

void loop()
{
}
