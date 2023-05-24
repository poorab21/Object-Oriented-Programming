#include"add.h"

add::add()
{
	this->x=0;
	this->y=0;
}
add::add(const int x,const int y)
{
	this->x=x;
	this->y=y;
}
add::~add()
{
	this->x=0;
	this->y=0;
}
void add::display()
{
	std::cout<<"X = "<<this->x<<std::endl;
	std::cout<<"Y = "<<this->y<<std::endl;
}
void add::setX(const int x)
{
	this->x=x;
}
void add::setY(const int y)
{
	this->y=y;
}
int add::getX()const
{
	return this->x;
}
int add::getY()const
{
	return this->y;
}
