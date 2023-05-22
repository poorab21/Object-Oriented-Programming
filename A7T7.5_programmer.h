#include"employee.h"
#ifndef PROGRAMMER_H
#define PROGRAMMER_H
class programmer:protected employee{
	private:
		std::string languages;
	public:
		programmer();
		~programmer();
		void setName(const std::string);
		void setEmpNo(const int);
		void setLanguages(const std::string);
		std::string getLanguages()const;
		void setExperience(const int);
		int getExperience()const;
		int getEmpNo()const;
		std::string getName()const;
		void display();
};
#endif
