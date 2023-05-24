#include"possessions.h"

possessions::possessions()
{
	this->size=0;
}
possessions::possessions(const int size)
{
	this->size=size;
	ptr=new std::string[this->size];
}
possessions::~possessions()
{
	this->size=0;
}
void possessions::setdata()
{
	int i=0;
	do
	{
		std::cout<<"enter possessions:"<<std::endl;
	    getline(std::cin,ptr[i]);
	    i++;
	}
	while(i<this->size);
}
void possessions::display()
{
	int i=0;
	do
	{
		std::cout<<ptr[i]<<std::endl;
		i++;
	}
	while(i<this->size);
}
