#include<iostream>
#include"Student.h"
int main()
{
student s1("mr singh","IW121");
s1.setcgpa(3.5);
s1.setstatus("relegation");
s1.setCourseLoad(18);
student s2(s1);
s2.setstatus("probation");
s1.info();
s2.info();
s1.eligibility();
s2.eligibility();
student s3("mr robin","QA12");
s3.setcgpa(3.6);
s3.setstatus("cleared");
s3.setCourseLoad(20);
s3.info();
s3.eligibility();
}
