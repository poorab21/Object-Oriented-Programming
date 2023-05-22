#include<iostream>
#include<string.h>
#include"oop2.h"

void info::setNAME(char n[])
{
	strcpy(name,n);
}
void info::setX(int a)
{
	x=a;
}
void info::display()
{
	std::cout<<"Name = "<<name<<std::endl;
	std::cout<<"Number = "<<x<<std::endl;
}
