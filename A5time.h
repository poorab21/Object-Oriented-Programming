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
            time(const int,const int,const int);
            void printDuration();
            int gethour()const;
            int getminute()const;
            int getsecond()const;
            void sethour(const int);
            void setminute(const int);
            void setsecond(const int);
            friend time operator +(const time&,const time&);
}; 
#endif
