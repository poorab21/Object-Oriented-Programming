#include"passenger.h"

passenger::passenger()
{
this->cnic=" ";
this->name=" ";
}
passenger::passenger(const std::string name,const std::string cnic)
{
this->name=name;
this->cnic=cnic;
}
passenger::~passenger()
{
this->cnic=" ";
this->name=" ";
}
std::string passenger::getName()const
{
return name;
}