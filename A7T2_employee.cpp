#include"employee.h"

employee::employee()
{
	this->id=0;
	this->name=" ";
	this->salary=0.0;
}
employee::~employee()
{
	this->id=0;
	this->name=" ";
	this->salary=0.0;
}
int employee::getID()const
{
	return this->id;
}
float employee::getSalary()const
{
	return this->salary;
}
std::string employee::getName()const
{
	return this->name;
}
void employee::setName(const std::string name)
{
	this->name=name;
}
void employee::setID(const int id)
{
	this->id=id;
}
void employee::setSalary(const float salary)
{
	this->salary=salary;
}
void employee::view()
{
	std::cout<<"Employee ID = "<<this->id<<std::endl;
	std::cout<<"Employee Name = "<<this->name<<std::endl;
	std::cout<<"Employee Salary = "<<this->salary<<std::endl;
}


