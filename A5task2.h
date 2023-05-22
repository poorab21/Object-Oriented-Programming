#include<iostream>
#ifndef TASK2_H
#define TASK2_H
class student{
	private:
           std::string name;
           int age;
           std::string rollnumber;
	public:
            student();
            student(const std::string,const int,const std::string);
            void operator +=(const int);
            void setName(const std::string);
            void setAge(const int);
            void setRollnumber(const std::string);
            std::string getName()const;
            std::string getRollnumber()const;
            void display();
            int getAge()const;
};
#endif
