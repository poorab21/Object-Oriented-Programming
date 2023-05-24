#include"house.h"

house::house()
{
	this->sqfeet=0;
}
house::house(const int sqfeet,const inhabitants& h1)
{
	this->sqfeet=sqfeet;
	this->h1=h1;
}
house::~house()
{
	this->sqfeet=0;
}
void house::display()
{
	int i=0;
	std::cout<<"Square Feet = "<<this->sqfeet<<std::endl;
	std::cout<<"Number of Inhabitants = "<<h1.getPermit()<<std::endl;
	for(int i=0;i<h1.getPermit();i++)
	{
		std::cout<<h1[i]<<std::endl;
	}
}
