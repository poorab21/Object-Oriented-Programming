#include"task1.h"

student::student()
{
this->name=" ";
this->age=0;
this->rollnumber;
}
std::istream& operator >>(std::istream& in,student& s1)
{
std::cout<<"enter name:"<<std::endl;
getline(std::cin,s1.name);
std::cout<<"enter age:"<<std::endl;
in>>s1.age;
std::cin.ignore();
std::cout<<"enter rollnumber:"<<std::endl;
getline(std::cin,s1.rollnumber);
return in;
}
std::ostream& operator <<(std::ostream& out,student& s1)
{
out<<"Name = "<<s1.name<<std::endl;
out<<"Age = "<<s1.age<<std::endl;
out<<"Rollnumber = "<<s1.rollnumber<<std::endl;
return out;
}