#include"employee.h"
#ifndef DESIGNER_H
#define DESIGNER_H
class designer:protected employee{
	private:
		std::string field;
	public:
		designer();
		~designer();
		void setName(const std::string);
		void setField(const std::string);
		std::string getField()const;
		void setEmpNo(const int);
		void setExperience(const int);
		int getExperience()const;
		int getEmpNo()const;
		std::string getName()const;
		void display();
};
#endif
