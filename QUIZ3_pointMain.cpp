#include<iostream>
#include"point.h"
void operator ++(point& p)
{
int sub;
int sub2;
sub=p.getX();
sub2=p.getY();
sub++;
sub2++;
p.setX(sub);
p.setY(sub2);
}
void operator --(point& p)
{
int sub;
int sub2;
sub=p.getX();
sub2=p.getY();
sub--;
sub2--;
p.setX(sub);
p.setY(sub2);
}
int main()
{
point p1(2,1);
++p1;
++p1;
std::cout<<p1.getX()<<std::endl;
std::cout<<p1.getY()<<std::endl;
--p1;
--p1;
std::cout<<p1.getX()<<std::endl;
std::cout<<p1.getY()<<std::endl;
}