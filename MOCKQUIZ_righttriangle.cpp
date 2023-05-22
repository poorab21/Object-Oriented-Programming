#include"righttriangle.h"

righttriangle::righttriangle()
{
this->height=0;
this->length=0;
this->breadth=0;
}
righttriangle::~righttriangle()
{
this->height=0;
this->length=0;
this->breadth=0;
}
void righttriangle::setLength(const int length)
{
this->length=length;
}
void righttriangle::setHeight(const int height)
{
this->height=height;
}
void righttriangle::setBreadth(const int breadth)
{
this->breadth=breadth;
}
int righttriangle::getLength()const
{
return this->length;
}
int righttriangle::getBreadth()const
{
return this->breadth;
}
int righttriangle::getheight()const
{
return this->height;
}
void righttriangle::calcArea()
{
}
void righttriangle::Draw()
{
std::cout<<"Drawing Right-Triangle"<<std::endl;
}
void righttriangle::calcPerimeter()
{
}