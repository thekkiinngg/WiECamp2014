#include <Sparki.h>

void setup()
{
	float uss = sparki.ping();
	while(true)
	{
		if((uss<10))
		{
			if((uss!=-(1)))
			{
				sparki.beep(4000, 200);
			}
			else
			{
			}
		}
		else
		{
			sparki.beep(0, 0);
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
