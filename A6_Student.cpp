#include"Student.h"

student::student()
{
this->id=" ";
this->name=" ";
this->sem=" ";
this->size=0;
}
int student::getSize()const
{
return this->size;
}
student::student(const std::string id,const std::string name,std::string sem)
{
this->id=id;
this->name=name;
this->sem=sem;
this->size=0;
}
student::~student()
{
this->name=" ";
this->id=" ";
this->sem=" ";
delete []courses;
}
std::string& student::operator [](const int n)
{
	if(this->size==0)
	{
		courses=new std::string[n];
		this->size=n;
	}
return this->courses[n];
}

void student::viewinfo()
{
int i=0;
std::cout<<"ID = "<<this->id<<std::endl;
std::cout<<"Name = "<<this->name<<std::endl;
std::cout<<"Semester = "<<this->sem<<std::endl;
do
{
std::cout<<courses[i]<<std::endl;
i++;
}
while(i<getSize());
}
