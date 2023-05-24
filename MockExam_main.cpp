#include"fruit.h"
int main()
{
fruit f("red",23.11,5);
std::cout<<f.TotalPrice()<<std::endl;
fruit f2("green",34.12,4);
std::cout<<f2.TotalPrice();
}