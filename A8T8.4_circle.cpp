#include"circle.h"

circle::circle()
{
	this->radius=0.0;
	this->filled=false;
	this->color="";
}
circle::~circle()
{
	this->radius=0.0;
	this->filled=false;
	this->color="";
}
circle::circle(const double radius,const std::string color,const bool fill)
{
	this->radius=radius;
	this->color=color;
	this->filled=filled;
}
double circle::getRadius()const
{
	return this->radius;
}
void circle::setRadius(const double radius)
{
	this->radius=radius;
}
double circle::CalculateArea()
{
	double sub=(this->radius)*(this->radius);
	return (3.141592654)*(sub);
}
double circle::CalculatePerimeter()
{
	double sub=(this->radius)*2;
	return (3.141592654)*(sub);
}



