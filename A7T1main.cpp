#include"car.h"
int main()
{
	engine e("model number 1");
	car c(2011,"model 2",1200.76,"green",e);
	c.displayInfo();
	car c2(2019,"model 5",9811.1,"yellow",e);
	c2.displayInfo();
}
