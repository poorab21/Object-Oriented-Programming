#include"Square.h"

square::square()
{
this->side=0;
}
square::~square()
{
this->side=0;
}
square::square(const square& s)
{
this->side=s.side;
}
void square::showinfo()const
{
std::cout<<"Side = "<<this->side<<std::endl;
std::cout<<"Area of Square = "<<(this->side*this->side)<<std::endl;
}
square square::operator =(const square& s1)
{
this->side=s1.side;
return (*this);
}
float square::operator ()(const float side)
{
this->side=side;
return (this->side*this->side);
}

