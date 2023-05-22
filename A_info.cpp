#include"info.h"
#include<iostream>
info::info()
{
	name=" ";
	address=" ";
}
info::~info()
{
	name=" ";
	address=" ";
}
void info::setNAME(const std::string n)
{
	name=n;
}
void info::setADDRESS(const std::string a)
{
	address=a;
}
std::string info::getNAME()const
{
	return name;
}
std::string info::getADDRESS()const
{
	return address;
}
void info::display()
{
	std::cout<<"name = "<<name<<std::endl;
	std::cout<<"address = "<<address<<std::endl;
}
