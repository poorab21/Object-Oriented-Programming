#include<iostream>

#ifndef NUMBER_H
#define NUMBER_H
class number{
	private:
		int x;
	public:
		number();
		number(const int);
		void operator --();
		void display();
};
#endif
