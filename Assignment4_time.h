#include<iostream>
#ifndef TIME_H
#define TIME_H
class time{
   private:
       int hour;
       int minute;
       int second;
   public:
   	   time();
       time(int,int,int);
       time(time&);
       int gethour()const;
       int getminute()const;
       int getsecond()const;
       void sethour(int);
       void setminute(int);
       void setsecond(int);
       void settime(int,int,int);
       void print()const;
       friend void nextsecond(time); 
};
#endif
