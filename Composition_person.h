#include<iostream>
#include"birthday.h"
#ifndef PERSON_H
#define PERSON_H
class person{
	private:
	  std::string name;
	  birthday birth;
	public:
	  person();
	  person(const std::string,const birthday);
	  void display();
	  ~person();
};
#endif
