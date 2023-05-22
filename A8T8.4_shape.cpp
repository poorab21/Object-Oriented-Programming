#include"shape.h"

shape::shape()
{
	this->color="";
	this->filled=false;
}
shape::~shape()
{
	this->color="";
	this->filled=false;
}
shape::shape(const std::string color,const bool filled)
{
	this->color=color;
	this->filled=filled;
}
void shape::setColor(const std::string color)
{
	this->color=color;
}
std::string shape::getColor()const
{
	return this->color;
}
bool shape::isFilled()
{
	return this->filled;
}
void shape::setFill(const bool filled)
{
	this->filled=filled;
}



