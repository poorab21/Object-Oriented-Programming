#include"person.h"

person::person()
{
	this->age=0;
	this->name="";
}
person::~person()
{
	this->age=0;
	this->name="";
}
void person::ShowData()
{
	std::cout<<"Age = "<<this->age<<std::endl;
	std::cout<<"Name = "<<this->name<<std::endl;
}
