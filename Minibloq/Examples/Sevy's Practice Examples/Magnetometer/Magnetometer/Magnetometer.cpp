#include <Sparki.h>

void setup()
{
	float x = 0;
	float y = 0;
	float z = 0;
	while(true)
	{
		sparki.clearLCD();
		x = sparki.magX();
		y = sparki.magY();
		z = sparki.magZ();
		sparki.print("Mag X: ");
		sparki.print(x);
		sparki.print("\nMag Y: ");
		sparki.print(y);
		sparki.print("\nMag Z: ");
		sparki.print(z);
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
