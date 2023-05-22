#include"point.h"
point::point()
{
this->x=0;
this->y=0;
}
point::point(const int x,const int y)
{
this->x=x;
this->y=y;
}
int point::getX()const
{
return this->x;
}
int point::getY()const
{
return this->y;
}
void point::setX(const int x)
{
this->x=x;
}
void point::setY(const int y)
{
this->y=y;
}

void point::display()
{
std::cout<<"X = "<<this->x<<std::endl;
std::cout<<"Y = "<<this->y<<std::endl;
}