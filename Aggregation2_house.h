#include<iostream>
#include"inhabitants.h"
#ifndef HOUSE_H
#define HOUSE_H
class house{
	private:
		int sqfeet;
		std::string color;
		inhabitants *h1;
	public:
		house();
		house(const int,const std::string,inhabitants *);
		~house();
		void display();
};
#endif
