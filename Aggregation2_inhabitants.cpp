#include"inhabitants.h"

inhabitants::inhabitants()
{
	this->number=0;
}
inhabitants::inhabitants(const int number)
{
	this->number=number;
}
inhabitants::~inhabitants()
{
	this->number=0;
}
void inhabitants::displayInhabitants()
{
	std::cout<<"number of inhabitants = "<<this->number<<std::endl;
}
