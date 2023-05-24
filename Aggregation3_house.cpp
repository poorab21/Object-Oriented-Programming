#include"house.h"
house::house()
{
	this->sqfeet=0;
	this->color=" ";
}
house::house(const int sqfeet,const std::string color,inhabitants *h1)
{
	this->sqfeet=sqfeet;
	this->color=color;
	this->h1=h1;
}
house::~house()
{
	this->color=" ";
	this->sqfeet=0;
	delete h1;
}
void house::display()
{
	std::cout<<"color = "<<this->color<<std::endl;
	std::cout<<"Square Feet = "<<this->sqfeet<<std::endl;
	std::cout<<"Number of Inhabitants = "<<h1->getNumber()<<std::endl;
}
