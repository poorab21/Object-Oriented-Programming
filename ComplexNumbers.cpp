#include<iostream>
#include"ComplexNumbers.h"

int complexnumbers::count=0;
complexnumbers::complexnumbers()
{
real=0;
imaginary=0;
}
complexnumbers::complexnumbers(const float real,const float imaginary)
{
this->real=real;
this->imaginary=imaginary;
}
complexnumbers::complexnumbers(const complexnumbers& cn)
{
this->real=cn.real;
this->imaginary=cn.imaginary;
}
complexnumbers::~complexnumbers()
{
real=0;
imaginary=0;
}
float complexnumbers::getreal()const
{
return this->real;
}
float complexnumbers::getimaginary()const
{
return this->imaginary;
}
void complexnumbers::display()
{
	if(this->imaginary<0)
	{
	std::cout<<"Complex Number = "<<this->real<<this->imaginary<<"i"<<std::endl;
    }
    else if (this->imaginary>0)
    {
    	std::cout<<"Complex Number = "<<this->real<<"+"<<this->imaginary<<"i"<<std::endl;
	}
}
int complexnumbers::getcount()
{
return count;
}
void complexnumbers::setreal(const float real)
{
this->real=real;
}
void complexnumbers::setimaginary(const float imaginary)
{
this->imaginary=imaginary;
}
void complexnumbers::addreal(const complexnumbers& c1,const complexnumbers& c2)
{
int addition;
addition=c1.real+c2.real;
std::cout<<"Sum of Real Numbers = "<<addition<<std::endl;
}
void complexnumbers::subreal(const complexnumbers& c1,const complexnumbers& c2)
{
int subtraction;
subtraction=c1.real-c2.real;
std::cout<<"Subtraction of Real Numbers = "<<subtraction<<std::endl;
}
void complexnumbers::addimaginary(const complexnumbers& c1,const complexnumbers& c2)
{
int addition;
addition=c1.imaginary+c2.imaginary;
std::cout<<"addition of imaginary numbers = "<<addition<<"i"<<std::endl;
}
void complexnumbers::subimaginary(const complexnumbers& c1,const complexnumbers& c2)
{
int subtraction;
subtraction=c1.imaginary-c2.imaginary;
std::cout<<"subtraction of imaginary numbers = "<<subtraction<<"i"<<std::endl;
}
void complexnumbers::addnumbers(const complexnumbers& c1,const complexnumbers& c2)
{
int realnumber;
int imaginarynumber;
realnumber=c1.real+c2.real;
imaginarynumber=c1.imaginary+c2.imaginary;
if(imaginarynumber<0)
{
std::cout<<realnumber<<imaginarynumber<<"i"<<std::endl;
}
else if (imaginarynumber>0)
{
	std::cout<<realnumber<<"+"<<imaginarynumber<<std::endl;
}
}
void complexnumbers::subnumbers(const complexnumbers& c1,const complexnumbers& c2)
{
int realnumber;
int imaginarynumber;
realnumber=c1.real-c2.real;
imaginarynumber=c1.imaginary-c2.imaginary;
if(imaginarynumber>0)
{
std::cout<<realnumber<<"+"<<imaginarynumber<<"i"<<std::endl;
}
else if(imaginarynumber<0)
{
	std::cout<<realnumber<<imaginarynumber<<"i"<<std::endl;
}
}
