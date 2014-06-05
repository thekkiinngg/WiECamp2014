#include <Sparki.h>

void setup()
{
	for(unsigned int _i=0; _i<(unsigned int)(5); _i++)
	{
		//Beep 5 times
		sparki.beep(400, 100);
		delay(1000);
	}
}

void loop()
{
}
