#include"car.h"

car::car()
{
	this->year=0;
	this->model=" ";
	this->color=" ";
	this->price=0.0;
}
car::car(const int year,const std::string model,const float price,const std::string color,engine e)
{
	this->year=year;
	this->model=model;
	this->price=price;
	this->color=color;
	this->e=e;
}
car::~car()
{
	this->year=0;
	this->model=" ";
	this->color=" ";
	this->price=0.0;
}
void car::displayInfo()
{
	std::cout<<"Car Year = "<<this->year<<std::endl;
	std::cout<<"Car Model = "<<this->model<<std::endl;
	std::cout<<"Car Color = "<<this->color<<std::endl;
	std::cout<<"Car Price = "<<this->price<<std::endl;
	std::cout<<"Engine Model-Number = "<<this->e.getModelNumber()<<std::endl;
}
