#include"employee.h"

employee::employee()
{
	this->name="";
	this->experience=0;
	this->empNO=0;
}
employee::~employee()
{
	this->name="";
	this->experience=0;
	this->empNO=0;
}
void employee::ShowData()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"Experience = "<<this->experience<<std::endl;
	std::cout<<"Employee Number = "<<this->empNO<<std::endl;
}
