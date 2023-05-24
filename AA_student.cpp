#include"student.h"

student::student()
{
	this->id=0;
	this->marks=0.0;
}
student::student(const int id,const float marks)
{
	this->id=id;
	this->marks=marks;
}
student::~student()
{
	this->id=0;
	this->marks=0.0;
}
int student::getAge()const
{
	return this->age;
}
std::string student::getName()const
{
	return this->name;
}
void student::setName(const std::string name)
{
	this->name=name;
}
void student::setAge(const int age)
{
	this->age=age;
}
void student::setID(const int id)
{
	this->id=id;
}
void student::setMarks(const float marks)
{
	this->marks=marks;
}
int student::getID()const
{
	return this->id;
}
float student::getMarks()const
{
	return this->marks;
}
void student::ShowData()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"Age = "<<this->age<<std::endl;
	std::cout<<"ID = "<<this->id<<std::endl;
	std::cout<<"Marks = "<<this->marks<<std::endl;
}
