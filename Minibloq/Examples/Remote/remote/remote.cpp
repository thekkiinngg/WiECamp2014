#include <Sparki.h>

void setup()
{
	float code = 0;
	sparki.clearLCD();
	while(true)
	{
		code = sparki.readIR();
		if((code!=0))
		{
			if(((int)(code)==(int)(70)))
			{
				sparki.moveForward(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(21)))
			{
				sparki.moveBackward(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(71)))
			{
				sparki.moveRight(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(69)))
			{
				sparki.moveLeft(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(64)))
			{
				sparki.moveForward(0.1);
				sparki.gripperStop();
			}
			else
			{
				sparki.print("try a different button");
			}
		}
		else
		{
			sparki.print("please press a button");
		}
		delay(100);
	}
}

void loop()
{
}
