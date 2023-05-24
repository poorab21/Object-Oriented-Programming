#include"employee.h"

employee::employee()
{
this->id=0;
this->name="";
this->salary=0.0;
}
employee::employee(const int id,const std::string name,const float salary)
{
this->id=id;
this->name=name;
this->salary=salary;
}
employee::~employee()
{
this->id=0;
this->name="";
this->salary=0.0;
}
void employee::setID(const int id)
{
this->id=id;
}
void employee::setName(const std::string name)
{
this->name=name;
}
void employee::setSalary(const float salary)
{
this->salary=salary;
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
void employee::view()
{
std::cout<<"Name = "<<this->name<<std::endl;
std::cout<<"ID = "<<this->id<<std::endl;
std::cout<<"Salary = "<<this->salary<<std::endl;
}