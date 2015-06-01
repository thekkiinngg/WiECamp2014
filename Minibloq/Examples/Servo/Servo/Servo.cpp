#include <Sparki.h>

void setup()
{
	while(true)
	{
		// * SERVO_LEFT constant doesn't exist, = -90
		//rotate the servo to -90 degree position (left)
		//* Changed limits because +/-90 deg are beyond servo limits
		sparki.servo(-(80));
		delay(1000);
		// * SERVO_CENTER constant doesn't exist, = 0
		// rotate the servo to 0 degree position (forward)
		sparki.servo(0);
		delay(1000);
		// * SERVO_RIGHT constant doesn't exist, = 90
		// rotate the servo to 90 degree position (right)
		sparki.servo(80);
		delay(1000);
		// * Rest of example omitted because constants don't exist
	}
}

void loop()
{
}
