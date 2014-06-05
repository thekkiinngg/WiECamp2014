#include <Sparki.h>

void setup()
{
	float x = sparki.accelX();
	float y = sparki.accelY();
	float z = sparki.accelZ();
	while(true)
	{
		x = sparki.accelX();
		y = sparki.accelY();
		z = sparki.accelZ();
		sparki.clearLCD();
		sparki.print("X = ");
		sparki.print(x);
		sparki.print("\nY = ");
		sparki.print(y);
		sparki.print("\nZ = ");
		sparki.print(z);
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
