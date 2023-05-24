#ifndef CAR_H
#define CAR_H
#include"engine.h"
#include<iostream>
class car{
	private:
		int year;
		std::string color;
		int NoOfGears;
		engine e;
	public:
		car();
		car(const engine&,const int,const int,const std::string);
		~car();
		void display();
		friend std::ostream& operator <<(std::ostream&,const engine&);
};
#endif
