#include"department.h"

department::department()
{
this->id=0;
this->name="";
}
department::department(const int id,const std::string name,employee *e)
{
this->id=id;
this->name=name;
this->e=e;
}
department::~department()
{
this->id=0;
this->name="";
}
int department::getID()const
{
return this->id;
}
std::string department::getName()const
{
return this->name;
}
void department::setID(const int id)
{
this->id=id;
}
void department::setName(const std::string name)
{
this->name=name;
}
void department::view()
{
std::cout<<"Department ID = "<<this->id<<std::endl;
std::cout<<"Department Name = "<<this->name<<std::endl;
std::cout<<"Employee ID = "<<this->e->getID()<<std::endl;
std::cout<<"Employee Name = "<<this->e->getName()<<std::endl;
std::cout<<"Employee Salary = "<<this->e->getSalary()<<std::endl;
}