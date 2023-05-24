#include"employee.h"
#ifndef DEPARTMENT_H
#define DEPARTMENT_H
class department{
	private:
	   int id;
	   std::string name;
	   employee *e;
	public:
	   department();
	   department(const int,const std::string,employee * );
	   ~department();
	   int getID()const;
	   std::string getName()const;
	   void setID(const int);
           void setName(const std::string);
	   void view();
};
#endif