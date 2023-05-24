#include<iostream>
#ifndef PERSON_H
#define PERSON_H
class person{
	protected:
		int age;
		std::string name;
	public:
		person();
		void ShowData();
		~person();
};
#endif
