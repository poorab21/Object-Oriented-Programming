#include<iostream>
#include<stdio.h>
#include"point.h"
bool operator ==(point& p1,point& p2)
{
if((p1.getX())==(p2.getX()) && (p1.getY())==(p2.getY()))
{
return true;
}
else
{
return false;
}
}
int main()
{
  point p1(11,2);
  point p2(2,2);
std::cout<<(p1<p2)<<std::endl;
std::cout<<(p1>=p2)<<std::endl;
std::cout<<(p1==p2)<<std::endl;
}