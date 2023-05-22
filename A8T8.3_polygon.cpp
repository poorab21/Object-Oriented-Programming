#include"polygon.h"

polygon::polygon()
{
	this->width=0;
	this->height=0;
}
polygon::~polygon()
{
	this->width=0;
	this->height=0;
}
void polygon::setValues(const int w,const int h)
{
	this->width=w;
	this->height=h;
}
