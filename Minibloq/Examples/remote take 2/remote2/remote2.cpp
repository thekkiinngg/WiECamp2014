#include <Sparki.h>

void setup()
{
	float code = 0;
	sparki.clearLCD();
	code = sparki.readIR();
	sparki.print("got reading from keypad");
}

void loop()
{
}
