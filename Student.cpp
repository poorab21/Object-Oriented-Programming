#include<iostream>
#include"Student.h"

int student::count=0;
student::student()
{
name=" ";
rollnumber=" ";
status=" ";
course_load=0;
cgpa=0;
count++;
}
student::student(const std::string name,const std::string rollnumber)
{
this->name=name;
this->rollnumber=rollnumber;
count++;
}
student::student(const student& s)
{
this->name=s.name;
this->rollnumber=s.rollnumber;
this->cgpa=s.cgpa;
this->status=s.status;
this->course_load=s.course_load;
count++;
}
void student::setstatus(const std::string status)
{
	this->status=status;
}
std::string student::getStatus()const
{
	return this->status;
}
void student::setCourseLoad(const int course_load)
{
	this->course_load=course_load;
}
int student::getCourseLoad()const
{
	return this->course_load;
}
void student::setcgpa(const double cgpa)
{
	this->cgpa=cgpa;
}
float student::getcgpa()const
{
	return this->cgpa;
}
student::~student()
{
name=" ";
rollnumber=" ";
status=" ";
course_load=0;
cgpa=0;
count++;
}
int student::getCount()
{
return count;
}
void student::info()const
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"RollNumber = "<<this->rollnumber<<std::endl;
	std::cout<<"CGPA = "<<this->cgpa<<std::endl;
	std::cout<<"Status = "<<this->status<<std::endl;
	std::cout<<"Course Load = "<<this->course_load<<std::endl;
}
void student::eligibility()
{
	int decide=0;
	if(this->cgpa>3.5)
	{
		decide++;
	}
	else 
	{
		std::cout<<"Ineligiblity due to CGPA"<<std::endl;
	}
	if(this->status=="cleared")
	{
		decide++;
	}
	else if(this->status=="probation")
	{
		std::cout<<"Ineligiblity due to probation"<<std::endl;
	}
	else if(this->status=="relegation")
	{
		std::cout<<"Ineligiblity due to relegation"<<std::endl;
	}
	if(this->course_load>=19)
	{
		decide++;
	}
	else
	{
		std::cout<<"Ineligibility due to low course load"<<std::endl;
	}
	if(decide==3)
	{
		std::cout<<"You are Eligible for scholarship"<<std::endl;
	}
}
