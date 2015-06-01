#include <Sparki.h>

void setup()
{
	float cm = 0;
	// * Minibloq doesn't support loop function so we need a while loop
	while(true)
	{
		sparki.clearLCD();
		// measures the distance with Sparki's eyes
		cm = sparki.ping();
		sparki.print("Distance: ");
		// tells the distance to the computer
		sparki.print(cm);
		// * Haven't implemented println yet so use '\n'
		sparki.print(" cm\n");
		// * Number block doesn't support negative numbers...
		// * If statements are only if/else 
		// make sure its not too close or too far
		if((cm>=0))
		{
			// if the distance measured is less than 10 centimeters
			if((cm<10))
			{
				// * sparki.beep() doesn't exist, freq = 4000, duration = 200
				// * provides the same functionality
				// beep!
				sparki.beep(4000, 200);
			}
			else
			{
			}
		}
		else
		{
		}
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
