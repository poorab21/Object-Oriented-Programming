#include<iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
class rectangle{
	private:
		int length;
		int breadth;
	public:
		rectangle();
		rectangle(const int,const int);
		~rectangle();
		int getlength()const;
		int getbreadth()const;
		void setlength(const int);
		void setbreadth(const int);
		int operator ()(const int,const int);
		friend rectangle operator +(const rectangle&,const rectangle&);
		friend std::ostream& operator <<(std::ostream&,const rectangle&);
		friend std::istream& operator >>(std::istream&,rectangle&);
};
#endif
