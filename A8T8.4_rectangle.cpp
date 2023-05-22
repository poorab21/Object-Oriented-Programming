#include"rectangle.h"

rectangle::rectangle()
{
	this->width=0.0;
	this->length=0.0;
	this->filled=false;
	this->color="";
}
rectangle::~rectangle()
{
	this->width=0.0;
	this->length=0.0;
	this->color="";
	this->filled=false;
}
rectangle::rectangle(const double width,const double length,const std::string color,const bool filled)
{
	this->width=width;
	this->length=length;
	this->color=color;
	this->filled=filled;
}
double rectangle::getWidth()const
{
	return this->width;
}
double rectangle::getLength()const
{
	return this->length;
}
void rectangle::setWidth(const double width)
{
	this->width=width;
}
void rectangle::setLength(const double length)
{
	this->length=length;
}
double rectangle::CalculateArea()
{
	return (this->length)*(this->width);
}
double rectangle::CalculatePerimeter()
{
	return 2*((this->length)+(this->width));
}
