#include<iostream>
#include<stdio.h>
#include"point2.h"
std::string operator ==(point& p1,point& p2)
{
std::string answer1="true";
std::string answer2="false";
if((p1.getX())==(p2.getX()) && (p1.getY())==(p2.getY()))
{
return answer1;
}
else
{
return answer2;
}
}
int main()
{
  point p1(122,22);
  point p2(12,12);
  std::cout<<(p1<p2)<<std::endl;
  std::cout<<(p1>=p2)<<std::endl;
  std::cout<<(p1==p2)<<std::endl;
}