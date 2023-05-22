#include"shape.h"

shape::shape()
{
this->length=0;
this->breadth=0;
this->height=0;
}
shape::~shape()
{
this->length=0;
this->breadth=0;
this->height=0;
}
void shape::draw()
{
std::cout<<"Drawing in Shape"<<std::endl;
}
void shape::setLength(const int length)
{
this->length=length;
}
void shape::setHeight(const int height)
{
this->height=height;
}
void shape::setBreadth(const int breadth)
{
this->breadth=breadth;
}
int shape::getLength()const
{
return this->length;
}
int shape::getBreadth()const
{
return this->breadth;
}
int shape::getheight()const
{
return this->height;
}


