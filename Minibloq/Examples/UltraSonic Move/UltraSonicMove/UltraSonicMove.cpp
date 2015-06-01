#include <Sparki.h>

void setup()
{
	float uss = sparki.ping();
	while(true)
	{
		sparki.servo( 0 ); 
		if((uss<10))
		{
			if((uss!=-(1)))
			{
				sparki.moveStop();
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
