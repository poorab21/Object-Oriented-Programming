#include"person.h"

person::person()
{
	this->name=" ";
}
person::person(const std::string name,const possessions p1)
{
	this->name=name;
	this->p1=p1;
}
person::~person()
{
	this->name=" ";
}
void person::Persondisplay()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	p1.display();
}
