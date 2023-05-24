#include"fruit.h"

fruit::fruit()
{
this->price=0.0;
this->quantity=0;
}
fruit::fruit(std::string color,const float price,const int quantity)
{
this->color;
this->price=price;
this->quantity=quantity;
}
fruit::~fruit()
{
this->price=0.0;
this->quantity=0;
}
float fruit::TotalPrice()
{
float sub=static_cast<float>(this->quantity);
return (price*sub);
}

