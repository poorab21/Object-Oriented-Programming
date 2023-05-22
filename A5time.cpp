#include"time.h"

time::time()
{
this->hour=0;
this->minute=0;
this->second=0;
}
time::time(const int hour,const int minute,const int second)
{
this->hour=hour;
this->minute=minute;
this->second=second;
if(this->hour==24)
{
this->hour=0;
}
if(this->minute==60)
{
this->minute=0;
this->hour++;
}
if(this->second==60)
{
this->second=0;
this->minute++;
}
}
void time::printDuration()
{
std::cout<<"("<<this->hour<<":"<<this->minute<<":"<<this->second<<")"<<std::endl;
}
time operator +(const time& t1,const time& t2)
{
int newhour,newminute,newsecond;
newhour=t1.hour+t2.hour;
newminute=t1.minute+t2.minute;
newsecond=t1.second+t2.second;
if(newsecond>=60)
{
newsecond%=60;
newminute++;
}
if(newminute>=60)
{
newminute%=60;
newhour++;
}
if(newhour>=24)
{
newhour%=24;
}
time sub(newhour,newminute,newsecond);
return sub;
}
int time::gethour()const
{
return this->hour;
}
int time::getminute()const
{
return this->minute;
}
int time::getsecond()const
{
return this->second;
}
void time::sethour(const int hour)
{
this->hour=hour;
}
void time::setminute(const int minute)
{
this->minute=minute;
}
void time::setsecond(const int second)
{
this->second=second;
}

