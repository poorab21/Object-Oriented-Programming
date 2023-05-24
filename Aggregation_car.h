#include<iostream>
#include"passenger.h"
#ifndef CAR_H
#define CAR_H
class car{
	private:
	    std::string color;
	    int NoOfGears;
	    passenger *p;
	    int year;
	public:
	   car();
	   car(passenger *,const int,const int,const std::string);
	   ~car();
	   void display();
};
#endif
