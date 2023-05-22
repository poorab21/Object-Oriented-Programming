#include<iostream>
#ifndef STUDENT_H
#define STUDENT_H
class student{
	private:
	    std::string id;
	    std::string name;
	    std::string sem;
	    std::string *courses;
	    int size;
	public:
	    student();
	    student(const std::string,const std::string,const std::string);
	    ~student();
	    void viewinfo();
	    std::string& operator [](const int);
	    int getSize()const;
};
#endif
