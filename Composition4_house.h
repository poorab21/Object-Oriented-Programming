#include<iostream>
#include"inhabitants.h"
#ifndef HOUSE_H
#define HOUSE_H
class house{
	private:
		int sqfeet;
		inhabitants h1;
	public:
		house();
		house(const int,const inhabitants&);
		~house();
		void display();
};
#endif
