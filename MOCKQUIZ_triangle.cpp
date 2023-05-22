#include"triangle.h"

triangle::triangle()
{
this->height=0;
this->breadth=0;
this->length=0;
}
triangle::~triangle()
{
this->height=0;
this->breadth=0;
this->length=0;
}
void triangle::setLength(const int length)
{
this->length=length;
}
void triangle::setHeight(const int height)
{
this->height=height;
}
void triangle::setBreadth(const int breadth)
{
this->breadth=breadth;
}
int triangle::getLength()const
{
return this->length;
}
int triangle::getBreadth()const
{
return this->breadth;
}
int triangle::getheight()const
{
return this->height;
}
void triangle::calcArea()
{
}
void triangle::draw()
{
std::cout<<"Drawing Triangle"<<std::endl;
}
void triangle::calcPerimeter()
{
}