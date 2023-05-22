#include"human.h"
#ifndef STUDENT_H
#define STUDENT_H
class student:protected human{
	private:
		std::string enrollmentNumber;
	public:
		student();
		void setFirstName(const std::string);
		void setLastName(const std::string);
		std::string getFirstName()const;
		std::string getLastName()const;
		student(const std::string);
		~student();
		void setEnrollmentNumber(const std::string);
		std::string getEnrollmentNumber()const;
		void display();
};
#endif
