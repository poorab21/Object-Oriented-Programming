#include<iostream>
#include"calculator.h"
void calculator::sum()
{
	std::cout<<"the sum is "<<x+y<<std::endl;
}
void calculator::product()
{
	std::cout<<"the product is "<<x*y<<std::endl;
}
void calculator::division()
{
	std::cout<<"the division is "<<x/y<<std::endl;
}
void calculator::subtraction()
{
	std::cout<<"the subtraction is "<<x-y<<std::endl;
}
calculator::calculator(float a,float b)
{
	x=a;
	y=b;
}
calculator::~calculator()
{
	x=0;
	y=0;
}
