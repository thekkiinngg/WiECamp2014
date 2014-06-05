#include <Sparki.h>

void setup()
{
	float edge_left = 0;
	float line_left = 0;
	float line_center = 0;
	float line_right = 0;
	float edge_right = 0;
	while(true)
	{
		sparki.clearLCD();
		edge_left = sparki.edgeLeft();
		line_left = sparki.lineLeft();
		line_center = sparki.lineCenter();
		line_right = sparki.lineRight();
		edge_right = sparki.edgeRight();
		sparki.print("Edge left: ");
		sparki.print(sparki.edgeLeft());
		sparki.print("\nLine left: ");
		sparki.print(sparki.lineLeft());
		sparki.print("\nLine center: ");
		sparki.print(sparki.lineCenter());
		sparki.print("\nLine right: ");
		sparki.print(sparki.lineRight());
		sparki.print("\nEdge right: ");
		sparki.print(sparki.edgeRight());
		sparki.updateLCD();
	}
}

void loop()
{
}
