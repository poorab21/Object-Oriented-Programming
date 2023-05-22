#include<iostream>

class student{
private:
std::string name;
std::string rollnumber;
int course_load;
float cgpa;
std::string status;
static int count;
public:
student();
student(const std::string,const std::string);
~student();
student(const student&);
static int getCount();
void setstatus(const std::string);
std::string getStatus()const;
void setcgpa(const double);
float getcgpa()const;
void setCourseLoad(const int);
int getCourseLoad()const;
void info()const;
void eligibility();
};
