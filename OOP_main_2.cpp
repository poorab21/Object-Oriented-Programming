#include<iostream>
#include"room.h"
int main()
{
	furniture f(5,"wood");
	room r(f,"12000 sqft","3");
	f.setFurniture();
	r.display();
}
