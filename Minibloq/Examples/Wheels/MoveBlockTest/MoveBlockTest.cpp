#include <Sparki.h>

void setup()
{
	sparki.clearLCD();
	sparki.print("move block test");
	sparki.updateLCD();
	sparki.driveForwardWait( 100, 80 ); 
	delay(1000);
	sparki.driveBackwardWait( 100, 80 ); 
	delay(1000);
	sparki.pivotTurnLeftWait( 90, 80 ); 
	delay(1000);
	sparki.pivotTurnRightWait( 90, 80 ); 
	delay(1000);
	sparki.spinLeftWait( 90, 80 ); 
	delay(1000);
	sparki.spinRightWait( 90, 80 ); 
	delay(1000);
	sparki.turnLeftWait( 90, 100, 80 ); 
	delay(1000);
	sparki.turnRightWait( 90, 100, 80 ); 
	delay(1000);
	sparki.moveStop();
	sparki.beep(4000, 200);
}

void loop()
{
}
