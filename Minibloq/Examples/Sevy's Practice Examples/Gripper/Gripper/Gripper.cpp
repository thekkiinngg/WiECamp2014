#include <Sparki.h>

void setup()
{
	while(true)
	{
		sparki.gripperOpen();
		delay(1000);
		sparki.gripperClose();
		delay(1000);
		sparki.gripperStop();
		delay(1000);
	}
}

void loop()
{
}
