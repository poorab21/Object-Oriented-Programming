#include<iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class employee{
	private:
		int id;
		std::string name;
		float salary;
	public:
		employee();
		~employee();
		int getID()const;
		void setID(const int);
		std::string getName()const;
		void setName(const std::string);
		float getSalary()const;
		void setSalary(const float);
		void view();
};
#endif
