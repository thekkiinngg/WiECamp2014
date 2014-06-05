#include <Sparki.h>

void setup()
{
	float code = 0;
	while(true)
	{
		sparki.clearLCD();
		code = sparki.readIR();
		if((code!=-(1)))
		{
			sparki.print("Received Code: ");
			sparki.print(code);
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
			if(((int)(code)==(int)(68)))
			{
				sparki.moveLeft(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(67)))
			{
				sparki.moveRight(0);
			}
			else
			{
			}
			if(((int)(code)==(int)(64)))
			{
				sparki.moveLeft(1);
				delay(1000);
			}
			else
			{
			}
		}
		else
		{
		}
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
