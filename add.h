#include<iostream>
#ifndef ADD_H
#define ADD_H
class add{
	private:
		int x;
		int y;
	public:
		add();
		add(const int,const int);
		~add();
		void display();
		int getX()const;
		int getY()const;
		void setX(const int);
		void setY(const int);
};
#endif
