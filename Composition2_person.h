#include<iostream>
#ifndef PERSON_H
#define PERSON_H
#include"possessions.h"

class person{
	private:
		std::string name;
		possessions p1;
	public:
		person();
		person(const std::string,const possessions);
		~person();
		void Persondisplay();
};
#endif
