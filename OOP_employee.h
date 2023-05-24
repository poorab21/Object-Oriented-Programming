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
	  employee(const int,const std::string,const float);
	  ~employee();
	  int getID()const;
	  float getSalary()const;
	  std::string getName()const;
	  void setID(const int);
	  void setName(const std::string);
	  void setSalary(const float);
	  void view();
};
#endif