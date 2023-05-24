#include"rectangle.h"

rectangle::rectangle()
{
	this->length=0;
	this->breadth=0;
}
rectangle::rectangle(const int length,const int breadth)
{
	this->length=length;
	this->breadth=breadth;
}
rectangle::~rectangle()
{
	this->length=0;
	this->breadth=0;
}
int rectangle::operator ()(const int length,const int breadth)
{
	this->length=length;
	this->breadth=breadth;
	return (this->length*this->breadth);
}
rectangle operator +(const rectangle& r1,const rectangle& r2)
{
	rectangle sub;
	sub.length=r1.length+r2.length;
	sub.breadth=r1.breadth+r2.breadth;
	return sub;
}
std::ostream& operator <<(std::ostream& out,const rectangle& r1)
{
	out<<"Length = "<<r1.length<<std::endl;
	out<<"Breadth = "<<r1.breadth<<std::endl;
	return out;
}
std::istream& operator >>(std::istream& in,rectangle& r1)
{
	std::cout<<"enter length:"<<std::endl;
	in>>r1.length;
	std::cout<<"enter breadth:"<<std::endl;
	in>>r1.breadth;
	return in;
}
void rectangle::setlength(const int length)
{
	this->length=length;
}
void rectangle::setbreadth(const int breadth)
{
	this->breadth=breadth;
}
int rectangle::getlength()const
{
	return this->length;
}
int rectangle::getbreadth()const
{
	return this->breadth;
}








