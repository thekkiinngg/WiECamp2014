#include <Sparki.h>

void setup()
{
	float distance = 0;
	while(true)
	{
		sparki.clearLCD();
		distance = sparki.ping_single();
		sparki.print("Distance: ");
		sparki.print(distance);
		sparki.updateLCD();
	}
}

void loop()
{
}
