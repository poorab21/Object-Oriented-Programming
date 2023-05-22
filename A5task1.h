#include<iostream>
#ifndef TASK1_H
#define TASK1_H
class student{
	private:
           std::string name;
           int age;
           std::string rollnumber;
	public:
	   student();
           friend std::istream& operator >>(std::istream&,student&);
           friend std::ostream& operator <<(std::ostream&,student&);
};
#endif

