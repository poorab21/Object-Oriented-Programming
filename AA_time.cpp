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
}
void time::display()
{
std::cout<<"("<<this->hour<<":"<<this->minute<<":"<<this->second<<")"<<std::endl;
}
time& time::operator -=(const time& t1)
{
this->hour-=t1.hour;
this->minute-=t1.minute;
this->second-=t1.second;
return (*this);
}
