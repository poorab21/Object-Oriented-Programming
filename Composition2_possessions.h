#include<iostream>
#ifndef POSSESSIONS_H
#define POSSESSIONS_H
class possessions{
	private:
		int size;
		std::string *ptr;
	public:
		possessions();
		possessions(const int);
		~possessions();
		void setdata();
		void display();
};
#endif
