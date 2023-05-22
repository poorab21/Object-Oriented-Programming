#include<iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class employee{
	protected:
		std::string name;
		int empNO;
		int experience;
	public:
		employee();
		~employee();
		void ShowData();
};
#endif
