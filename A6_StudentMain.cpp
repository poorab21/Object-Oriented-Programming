#include<iostream>
#include"Student.h"
int main()
{
student s1("XZ","mr singh","4");
s1[5];
for(int i=0;i<(s1.getSize());i++)
{
	std::cout<<"Enter course name:"<<std::endl;
getline(std::cin,s1[i]);
}
s1.viewinfo();
student s2("AW","mr singh 2","5");
s2[3];
for(int i=0;i<(s2.getSize());i++)
{
	std::cout<<"enter Course Name:"<<std::endl;
	getline(std::cin,s2[i]);
}
s2.viewinfo();
}
