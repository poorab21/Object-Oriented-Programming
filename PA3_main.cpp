#include<iostream>
#include"author.h"
int main()
{
	author a1("mr singh","male","gmail");
	author a2;
	a1[5];
	for(int i=0;i<a1.getSize();i++)
	{
		std::cout<<"enter book name:"<<std::endl;
		getline(std::cin,a1[i]);
	}
	a2=a1;
	system("cls");
	for(int i=0;i<a2.getSize();i++)
	{
		std::cout<<a2[i]<<std::endl;
	}
}
