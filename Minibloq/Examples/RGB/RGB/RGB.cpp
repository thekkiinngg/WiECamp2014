#include <Sparki.h>

void setup()
{
	while(true)
	{
		// Make the LED maximum Red
		sparki.RGB(100,0,0);
		// wait 0.5 seconds (500 milliseconds)
		delay(500);
		// Make the LED maximum Green
		sparki.RGB(0,100,0);
		delay(500);
		// Make the LED maximum Blue
		sparki.RGB(0,0,100);
		delay(500);
		// Make the LED white (all colors)
		// * RGB_WHITE constant doesn't exist
		// * #define RGB_WHITE 50, 70, 100
		sparki.RGB(50,70,100);
		delay(500);
		// Turn LED off (no colors)
		// * RGB_OFF constant doesn't exist
		// * #define RGB_OFF 0, 0, 0
		sparki.RGB(0,0,0);
		delay(500);
	}
}

void loop()
{
}
