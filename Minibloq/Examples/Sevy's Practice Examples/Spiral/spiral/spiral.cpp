#include <Sparki.h>

void setup()
{
	float radius = 10;
	while((radius<500))
	{
		sparki.turnLeftWait( 10, radius, 90 ); 
		radius = (radius*1.01);
	}
}

void loop()
{
}
