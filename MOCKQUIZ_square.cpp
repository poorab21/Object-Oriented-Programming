#include"square.h"

square::square()
{
this->height=0;
this->breadth=0;
this->length=0;
}
square::~square()
{
this->height=0;
this->breadth=0;
this->length=0;
}
void square::calcArea()
{
}
void square::Draw()
{
std::cout<<"Drawing Square"<<std::endl;
}
void square::setLength(const int length)
{
this->length=length;
}
void square::setHeight(const int height)
{
this->height=height;
}
void square::setBreadth(const int breadth)
{
this->breadth=breadth;
}
int square::getLength()const
{
return this->length;
}
int square::getBreadth()const
{
return this->breadth;
}
int square::getheight()const
{
return this->height;
}
