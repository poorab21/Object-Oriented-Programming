#include"car.h"

car::car()
{
this->color=" ";
this->year=0;
this->NoOfGears=0;
}
car::car(passenger* p,const int year,const int NoOfGears,const std::string color)
{
this->p=p;
this->color=color;
this->NoOfGears=NoOfGears;
this->year=year;
}
car::~car()
{
this->color=" ";
delete p;
this->year=0;
this->NoOfGears=0;
}
void car::display()
{
std::cout<<"Passenger Name = "<<this->p->getName();
}