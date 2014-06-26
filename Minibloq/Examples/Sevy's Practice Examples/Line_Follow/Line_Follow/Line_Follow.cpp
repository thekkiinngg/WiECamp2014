#include <Sparki.h>

void setup()
{
	float left = 0;
	float middle = 0;
	float right = 0;
	float low_sensor = 0;
	while(true)
	{
		sparki.clearLCD();
		left = sparki.lineLeft();
		middle = sparki.lineCenter();
		right = sparki.lineRight();
		sparki.print("\nLeft: ");
		sparki.print(left);
		sparki.print("\nMiddle: ");
		sparki.print(middle);
		sparki.print("\nRight: ");
		sparki.print(right);
		sparki.updateLCD();
		if(((sparki.lineLeft()>960)&&(sparki.lineCenter()<960)&&(sparki.lineRight()>960)))
		{
			sparki.driveForwardWait( 5, 80 ); 
			delay(100);
		}
		else
		{
			if((sparki.lineLeft()<960))
			{
				sparki.spinLeftWait( 5, 90 ); 
				delay(100);
			}
			else
			{
				sparki.driveForwardWait( 5, 90 ); 
			}
			if((sparki.lineRight()<960))
			{
				sparki.spinRightWait( 5, 90 ); 
				delay(100);
			}
			else
			{
				sparki.driveForwardWait( 5, 90 ); 
				delay(100);
			}
		}
		delay(50);
	}
}

void loop()
{
}
