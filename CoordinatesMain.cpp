#include<iostream>
#include"Coordinates.h"
int main()
{
	Coordinates c(5,-12);
	Coordinates c3(-4,312);
	Coordinates sub;
	sub.addCoordinates(c,c3);
	sub.subCoordinates(c,c3);
	sub.check(c,c3);
	average(c,c3);
	c.findQuadrant();
	c3.findQuadrant();
	sub.distance(c,c3);
	sub.distancefromOrigin(c);
}
