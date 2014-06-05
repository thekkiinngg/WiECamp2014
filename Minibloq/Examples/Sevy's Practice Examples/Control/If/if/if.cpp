#include <Sparki.h>

void setup()
{
	float var = 10;
	if(((int)(var)==(int)(10)))
	{
		sparki.RGB(0,0,100);
	}
	else
	{
	}
	while((var<11))
	{
		sparki.clearLCD();
		sparki.print("colors");
		sparki.updateLCD();
		var = (var+1);
	}
}

void loop()
{
}
