#include<iostream>

class complexnumbers{
private:
float real;
float imaginary;
static int count;
public:
complexnumbers();
complexnumbers(const float,const float);
complexnumbers(const complexnumbers&);
~complexnumbers();
float getreal()const;
float getimaginary()const;
static int getcount();
void setreal(const float);
void setimaginary(const float);
void display();
void addnumbers(const complexnumbers&,const complexnumbers&);
void subnumbers(const complexnumbers&,const complexnumbers&);
void addreal(const complexnumbers&,const complexnumbers&);
void subreal(const complexnumbers&,const complexnumbers&);
void addimaginary(const complexnumbers&,const complexnumbers&);
void subimaginary(const complexnumbers&,const complexnumbers&);
};
