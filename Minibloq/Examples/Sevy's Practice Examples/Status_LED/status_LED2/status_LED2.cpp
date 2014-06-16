#include <Sparki.h>

void setup()
{
	while(true)
	{
		digitalWrite(STATUS_LED, true);
		delay(500);
		digitalWrite(STATUS_LED, false);
		delay(500);
	}
}

void loop()
{
}
