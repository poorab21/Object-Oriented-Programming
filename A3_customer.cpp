#include"customer.h"
#include<string.h>
customer::customer()
{
	strcpy(name," ");
	strcpy(membership," ");
	number=0;
}
customer::customer(char n[],int num,char m[])
{
	strcpy(name,n);
	strcpy(membership,m);
	number=num;
}
customer::~customer()
{
    	strcpy(name," ");
	strcpy(membership," ");
	number=0;	
}
void customer::display()
{
	std::cout<<"Name = "<<name<<std::endl;
	std::cout<<"Number = "<<number<<std::endl;
	std::cout<<"Membership = "<<membership<<std::endl;
}
