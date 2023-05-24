#include<iostream>
#include"rectangle.h"
rectangle operator -(const rectangle& r1,const rectangle& r2)
{
	rectangle sub;
	sub.setlength(r1.getlength()-r2.getlength());
	sub.setbreadth(r1.getbreadth()-r2.getbreadth());
	return sub;
}
int main()
{
	rectangle r1(12,2);
	rectangle r2;
	rectangle r3;
	std::cin>>r2;
	r3=r1+r2;
	std::cout<<r3;
	r3=r3-r1;
	std::cout<<r3;
}
