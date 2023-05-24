#include<iostream>
#ifndef FRUIT_H
#define FRUIT_H
class fruit{
	private:
         static std::string color;
	 float price;
	 int quantity;
	public:
	 fruit();
	 fruit(std::string,const float,const int);
	~fruit();
    float TotalPrice();
};
#endif
