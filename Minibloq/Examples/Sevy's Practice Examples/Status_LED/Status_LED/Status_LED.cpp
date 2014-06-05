#include <Sparki.h>

void setup()
{
	float D13_LED = 13;
	float D12 = 0;
	while(true)
	{
		digitalWrite(D13_LED, ((int)(D12)==(int)(0)));
		delay(500);
		D12 = (-(D12)+1);
	}
}

void loop()
{
}
