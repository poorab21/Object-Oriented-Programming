#include<iostream>
#include<fstream>
#ifndef STUDENT_H
#define STUDENT_H
class student{
	private:
 	     std::string id;
	     std::string name;
	     std::string semester;
	     std::string *courses;
	     int size;
	public:
	   student(const std::string,const std::string,const std::string);
	   ~student();
	   std::string getName()const;
	   std::string getID()const;
	   std::string getSem()const;
	   std::string& operator [](const int);
           void viewinfo();
	   void fileWriting();
};
#endif
