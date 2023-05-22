#include<iostream>
#ifndef SQUARE_H
#define SQUARE_H
class square{
	private:
	    float side;
	public:
	    square();
	   ~square();
	   square(const square&);
	void showinfo()const;
	square operator =(const square&);
	float operator ()(const float);
};	
#endif
