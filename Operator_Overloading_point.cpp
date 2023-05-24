#include<iostream>
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
bool point::operator <(point& p1)
{
if((this->x)<(p1.x) && (this->y)<(p1.y))
{
return true;
}
else
{
return false;
}
}
bool operator >=(point& p1,point& p2)
{
if((p1.x)>=(p2.x) && (p1.y)>=(p2.y))
{
return true;
}
else
{
return false;
}
}
