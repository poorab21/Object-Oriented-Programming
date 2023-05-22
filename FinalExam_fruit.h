#include<iostream>
#ifndef FRUIT_H
#define FRUIT_H
class fruit{
	public:
	  fruit();
	  ~fruit();
	virtual void fun()=0;
};
#endif