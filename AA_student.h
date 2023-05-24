#include"person.h"
#ifndef STUDENT_H
#define STUDENT_H
class student:private person{
	private:
		int id;
		float marks;
	public:
		student();
		student(const int,const float);
		~student();
		void ShowData();
		int getID()const;
		float getMarks()const;
		void setID(const int);
		void setMarks(const float);
		int getAge()const;
		std::string getName()const;
		void setAge(const int);
		void setName(const std::string);
		
};
#endif
