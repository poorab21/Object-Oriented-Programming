#include<iostream>
#include"time.h"

time::time(int h,int m,int s)
{
hour=h;
minute=m;
second=s;
}
time::time()
{
	hour=0;
	minute=0;
	second=0;
}
time::time(time& t)
{
this->hour=t.hour;
this->minute=t.minute;
this->second=t.second;
}
int time::gethour()const
{
 return hour;
}
int time::getminute()const
{
return minute;
}
int time::getsecond()const
{
return second;
}
void time::sethour(int hour)
{
this->hour=hour;
}
void time::setminute(int minute)
{
this->minute=minute;
}
void time::setsecond(int second)
{
this->second=second;
}
void time::settime(int hour,int minute,int second)
{
this->hour=hour;
this->minute=minute;
this->second=second;
}
void time::print()const
{
std::cout<<"("<<this->hour<<":"<<this->minute<<":"<<this->second<<")"<<std::endl;
}

