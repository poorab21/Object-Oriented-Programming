#include<iostream>
#include"time.h"
void operator <(const time& t1,const time& t2)
{
 if(t1.gethour()<t2.gethour())
{
std::cout<<"("<<t1.gethour()<<":"<<t1.getminute()<<":"<<t1.getsecond()<<")  is less than ("<<t2.gethour()<<":"<<t2.getminute()<<":"<<t2.getsecond()<<")"<<std::endl;
}
else
{
std::cout<<"("<<t1.gethour()<<":"<<t1.getminute()<<":"<<t1.getsecond()<<")  is not less than ("<<t2.gethour()<<":"<<t2.getminute()<<":"<<t2.getsecond()<<")"<<std::endl;
}
}
int main()
{
time t1(22,42,54);
time t2(23,41,53);
time t3;
t3=t1+t2;
t3.printDuration();
 t1 < t2;
}
