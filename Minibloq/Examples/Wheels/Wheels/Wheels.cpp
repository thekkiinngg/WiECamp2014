#include <Sparki.h>

void setup()
{
	// * sparki.moveForward() not currently provided- 
	//        sparki.moveForward( 0 ) and sparki.moveForward( -1 ) behave the same way
	// * Minibloq doesn't add code into the loop function so we need our own while loop
	while(true)
	{
		// move the robot forward
		sparki.moveForward(0);
		// wait a second (1000 milliseconds)
		delay(1000);
		// move the robot backward
		sparki.moveBackward(0);
		delay(1000);
		// rotate the robot clockwise
		sparki.moveRight(0);
		delay(1000);
		// rotate the robot counter-clockwise
		sparki.moveLeft(0);
		delay(1000);
		// * sparki.moveStop doesn't exist yet, faking it with very small turn left movement
		// stop all robot wheels
		sparki.moveLeft(0.1);
		// wait two seconds (2000 milliseconds)
		delay(2000);
	}
}

void loop()
{
}
