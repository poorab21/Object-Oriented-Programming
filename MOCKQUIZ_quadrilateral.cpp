#include"quadrilateral.h"

quadrilateral::quadrilateral()
{
this->length=0;
this->breadth=0;
this->height=0;
}
quadrilateral::~quadrilateral()
{
this->length=0;
this->breadth=0;
this->height=0;
}
void quadrilateral::draw()
{
std::cout<<"Drawing quadrilateral"<<std::endl;
}
void quadrilateral::calcArea()
{
}
void quadrilateral::setLength(const int length)
{
this->length=length;
}
void quadrilateral::setHeight(const int height)
{
this->height=height;
}
void quadrilateral::setBreadth(const int breadth)
{
this->breadth=breadth;
}
int quadrilateral::getLength()const
{
return this->length;
}
int quadrilateral::getBreadth()const
{
return this->breadth;
}
int quadrilateral::getheight()const
{
return this->height;
}

