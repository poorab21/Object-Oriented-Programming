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
             void display();
             time& operator -=(const time&);
};
#endif
