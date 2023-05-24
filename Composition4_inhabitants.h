#include<iostream>
#ifndef INHABITANTS_H
#define INHABITANTS_H
class inhabitants{
	private:
		std::string *name;
		int permit;
	public:
		inhabitants();
		~inhabitants();
		int getPermit()const;
		std::string& operator [](const int);
};
#endif
