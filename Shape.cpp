#include<iostream>
#include"Shape.h"

shape::shape()
{
width=0;
height=0;
}
shape::shape(const int height,const int width)
{
this->height=height;
this->width=width;
}
shape::~shape()
{
width=0;
height=0;
}
void shape::FindArea()
{
this->area=(this->height)*(this->width);
std::cout<<"Area is "<<this->area;
}
void shape::setheight(const int height)
{
this->height=height;
}
void shape::setwidth(const int width)
{
this->width=width;
}
int shape::getwidth()const
{
return this->width;
}
int shape::getheight()const
{
return this->height;
}
void shape::display()
{
std::cout<<"Width of Shape = "<<this->width<<std::endl;
std::cout<<"Height of Shape = "<<this->height<<std::endl;
std::cout<<"Area of Shape = "<<(this->width)*(this->height)<<std::endl;
}
void shape::DetermineSquare(const shape& s)
{
if(s.width==s.height)
{
std::cout<<"The shape is a square"<<std::endl;
}
else
{
std::cout<<"The shape is not a square"<<std::endl;
}
}
void compare(const shape& s1,const shape& s2)
{
if(s1.height==s2.height && s1.width==s2.width)
{
std::cout<<"Height and Width are Same"<<std::endl;
}
else if (s1.height==s2.height && s1.width !=s2.width)
{
std::cout<<"Heights are same but Widths are Different"<<std::endl;
}
else if (s1.height !=s2.height && s1.width==s2.width)
{
std::cout<<"Widths are Same but Heights are Different"<<std::endl;
}
else if (s1.height !=s2.height && s1.width !=s2.height)
{
std::cout<<"Neither height or width match"<<std::endl;
}  
}