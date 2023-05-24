#include<iostream>
#ifndef INHABITANTS_H
#define INHABITANTS_H
class inhabitants{
	private:
		int number;
	public:
		inhabitants();
		inhabitants(const int);
		~inhabitants();
		int getNumber()const;
};
#endif
