#include"task2.h"

student::student()
{
this->name=" ";
this->age=0;
this->rollnumber=" ";
}
student::student(const std::string name,const int age,const std::string rollnumber)
{
this->name=name;
this->age=age;
this->rollnumber=rollnumber;
}
void student::display()
{
std::cout<<"Name = "<<this->name<<std::endl;
std::cout<<"Age = "<<this->age<<std::endl;
std::cout<<"Rollnumber = "<<this->rollnumber<<std::endl;
}
std::string student::getName()const
{
return this->name;
}
int student::getAge()const
{
return this->age;
}
std::string student::getRollnumber()const
{
return this->rollnumber;
}
void student::setName(const std::string name)
{
this->name=name;
}
void student::setAge(const int age)
{
this->age=age;
}
void student::setRollnumber(const std::string rollnumber)
{
this->rollnumber=rollnumber;
}
void student::operator +=(const int increase)
{
this->age=this->age+increase;
}