#include"person.h"

person::person()
{
this->name=" ";
}
person::person(const std::string name,const birthday birth)
{
this->birth=birth;
this->name=name;
}
person::~person()
{
this->name=" ";
}
void person::display()
{
std::cout<<"Name = "<<this->name<<std::endl;
std::cout<<"Birthday = "<<std::endl;
birth.show();
}