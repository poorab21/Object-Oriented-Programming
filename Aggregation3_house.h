#include<iostream>
#ifndef HOUSE_H
#define HOUSE_H
#include "inhabitants.h"
class house{
	private:
		int sqfeet;
		std::string color;
		inhabitants *h1;
	public:
		house();
		house(const int sqfeet,const std::string color,inhabitants *);
		~house();
		void display();
};
#endif
