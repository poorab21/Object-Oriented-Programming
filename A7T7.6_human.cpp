#include"human.h"

human::human()
{
	this->firstname="";
	this->lastname="";
}
human::~human()
{
	this->firstname="";
	this->lastname="";
}
human::human(const std::string firstname,const std::string lastname)
{
	this->firstname=firstname;
	this->lastname=lastname;
}
void human::display()
{
	std::cout<<"First-Name = "<<this->firstname<<std::endl;
	std::cout<<"Last-Name = "<<this->lastname<<std::endl;
}
