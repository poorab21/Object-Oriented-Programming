#include"student.h"

student::student()
{
	this->enrollmentNumber="";
}
student::student(const std::string enrollmentNumber)
{
	this->enrollmentNumber=enrollmentNumber;
}
student::~student()
{
	this->enrollmentNumber="";
}
void student::setFirstName(const std::string firstname)
{
	this->firstname=firstname;
}
void student::setLastName(const std::string lastname)
{
	this->lastname=lastname;
}
std::string student::getFirstName()const
{
	return this->firstname;
}
std::string student::getLastName()const
{
	return this->lastname;
}
void student::setEnrollmentNumber(const std::string enrollmentNumber)
{
	this->enrollmentNumber=enrollmentNumber;
}
std::string student::getEnrollmentNumber()const
{
	return this->enrollmentNumber;
}
void student::display()
{
	std::cout<<"First Name = "<<this->firstname<<std::endl;
	std::cout<<"Last Name = "<<this->lastname<<std::endl;
	std::cout<<"Enrollment Number = "<<this->enrollmentNumber<<std::endl;
}
