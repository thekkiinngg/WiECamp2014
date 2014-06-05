#include <Sparki.h>

void setup()
{
	while(true)
	{
		sparki.moveForward(2);
		delay(1000);
		sparki.moveBackward(2);
		delay(1000);
		sparki.moveLeft(2);
		delay(1000);
		sparki.moveRight(2);
		delay(1000);
	}
}

void loop()
{
}
