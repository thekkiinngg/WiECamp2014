#include <Sparki.h>

void setup()
{
	float x = 0;
	float y = 0;
	float z = 0;
	// * All variables must be defined at the beginning of the program
	while(true)
	{
		// wipe the screen
		sparki.clearLCD();
		// measure the accelerometer x-axis
		x = sparki.accelX();
		// measure the accelerometer y-axis
		y = sparki.accelY();
		// measure the accelerometer z-axis
		z = sparki.accelZ();
		// write the measurements to the screen
		sparki.print("Accel X: ");
		sparki.print(x);
		// * println functions not implemented yet
		sparki.print("\n");
		sparki.print("Accel Y: ");
		sparki.print(y);
		sparki.print("\n");
		sparki.print("Accel Z: ");
		sparki.print(z);
		sparki.print("\n");
		// display all of the information written to the screen
		sparki.updateLCD();
		delay(100);
	}
}

void loop()
{
}
