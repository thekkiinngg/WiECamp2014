#include <Sparki.h>

void setup()
{
	while(true)
	{
		sparki.RGB(100,0,0);
		delay(100);
		sparki.RGB(0,100,0);
		delay(100);
		sparki.RGB(0,0,100);
		delay(100);
		sparki.RGB(60,100,90);
		delay(500);
		sparki.RGB(0,0,0);
		delay(1000);
	}
}

void loop()
{
}
