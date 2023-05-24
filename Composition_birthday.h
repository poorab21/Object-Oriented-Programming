#include<iostream>
#ifndef BIRTHDAY_H
#define BIRTHDAY_H
class birthday{
	private:
	   int day;
	   std::string month;
	   int year;
	public:
	   birthday();
	   birthday(const int,const std::string,const int);
	   ~birthday();
	   void show();
};
#endif
