#include<iostream>
#include"house.h"
int main()
{
	int limit;
	std::cout<<"enter limit:"<<std::endl;
	std::cin>>limit;
	std::cin.ignore();
	inhabitants h1;
	h1[limit];
	house h(12000,h1);
	for(int i=0;i<limit;i++)
	{
		std::cout<<"enter inhabitant name:"<<std::endl;
		getline(std::cin,h1[i]);
	}
	h.display();
}
