#include"student.h"

student::student(const std::string id,const std::string name,const std::string semester)
{
this->id=id;
this->name=name;
this->semester=semester;
this->size=0;
}
student::~student()
{
this->id="";
this->name="";
this->semester="";
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
std::cout<<"Student ID = "<<this->id<<std::endl;
std::cout<<"Student Name = "<<this->name<<std::endl;
std::cout<<"Student Semester = "<<this->semester<<std::endl;
for(int i=0;i<(this->size);i++)
{
std::cout<<"Course "<<i+1<<" = "<<courses[i]<<std::endl;
}
}
void student::fileWriting()
{
std::ofstream fileholder("file.txt",std::ios::app);
fileholder.write((char*)(this),sizeof(student));
fileholder.close();
}
std::string student::getName()const
{
return this->name;
}
std::string student::getID()const
{
return this->id;
}
std::string student::getSem()const
{
return this->semester;
}
