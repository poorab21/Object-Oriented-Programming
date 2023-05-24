#include"car.h"
car::car()
{
	this->color=" ";
	this->year=0;
	this->NoOfGears=0;
}
car::car(const engine& e,const int NoOfGears,const int year,const std::string color)
{
	this->e=e;
	this->NoOfGears=NoOfGears;
	this->year=year;
	this->color=color;
}
car::~car()
{
	this->color=" ";
	this->NoOfGears=0;
	this->year=0;
}
std::ostream& operator <<(std::ostream& out,const engine& e)
{
out<<e.getHP()<<std::endl;
return out;
}
void car::display()
{
	std::cout<<"Color = "<<this->color<<std::endl;
	std::cout<<"Year = "<<this->year<<std::endl;
	std::cout<<"Engine = ";
	std::cout<<e;
	std::cout<<"No of Gears = "<<this->NoOfGears<<std::endl;
}
