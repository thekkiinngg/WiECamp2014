#include <Sparki.h>

void setup()
{
	float left = 0;
	float center = 0;
	float right = 0;
	while(true)
	{
		sparki.clearLCD();
		left = sparki.lightLeft();
		center = sparki.lightCenter();
		right = sparki.lightRight();
		sparki.print("Left: ");
		sparki.print(left);
		sparki.print("\nCenter: ");
		sparki.print(center);
		sparki.print("\nRight :");
		sparki.print(right);
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
