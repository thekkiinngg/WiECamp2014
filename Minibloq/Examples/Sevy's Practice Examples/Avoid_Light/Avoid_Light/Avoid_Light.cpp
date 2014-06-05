#include <Sparki.h>

void setup()
{
	float left = 0;
	float center = 0;
	float right = 0;
	while(true)
	{
		left = sparki.lightLeft();
		center = sparki.lightCenter();
		right = sparki.lightRight();
		if(((center>left)&&(center>right)))
		{
			sparki.moveBackward(2);
		}
		else
		{
			if(((left>center)&&(left>right)))
			{
				sparki.moveRight(5);
			}
			else
			{
				if(((right>center)&&(right>left)))
				{
					sparki.moveLeft(5);
				}
				else
				{
				}
			}
		}
		delay(100);
	}
}

void loop()
{
}
