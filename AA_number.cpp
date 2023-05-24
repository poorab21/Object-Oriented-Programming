#include<iostream>
#include"number.h"
number::number()
{
this->x=0;
}
number::number(const int x)
{
this->x=x;
}
void number::display()
{
std::cout<<"X = "<<this->x<<std::endl;
}
void number::operator --()
{
this->x=this->x-1;
}
 