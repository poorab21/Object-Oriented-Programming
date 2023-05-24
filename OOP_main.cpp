#include<iostream>
#include"car.h"
int main()
{
	engine e(1200);
	car c(e,4,2011,"red");
	c.display();
}
