#include<iostream>
#include"Coordinates.h"

Coordinates::Coordinates()
{
x=0;
y=0;
}
Coordinates::Coordinates(const float x,const float y)
{
this->x=x;
this->y=y;
}
Coordinates::~Coordinates()
{
x=0;
y=0;
}
int Coordinates::getX()const
{
return this->x;
}
int Coordinates::getY()const
{
return this->y;
}
void Coordinates::setX(const float x)
{
this->x=x;
}
void Coordinates::setY(const float y)
{
this->y=y;
}
void Coordinates::distance(const Coordinates& c1,const Coordinates& c2)
{
 int a;
 int b;
 float c;
 float divide;
 float sub;
a=(c2.getX())-(c1.getX());
a*=a;
b=(c2.getY())-(c1.getY());
b*=b;
c=a+b;
divide=c/2;
do
{
	sub=divide;
	divide=((c/sub)+sub)/2;
}
while(sub !=divide);
std::cout<<"Distance = "<<sub<<std::endl;
}
void Coordinates::distancefromOrigin(const Coordinates& c1)
{
	float a;
	float b;
	float c;
	float divide;
	float sub=0;
	a=c1.x*c1.x;
	b=c1.y*c1.y;
	c=a+b;
	divide=c/2;
	while(divide !=sub)
	{
		sub=divide;
		divide=((c/sub)+sub)/2;
	}
	std::cout<<"Distance of ("<<c1.x<<","<<c1.y<<") from origin = "<<divide<<std::endl;
}
void Coordinates::display()
{
std::cout<<" X = "<<this->x<<std::endl;
std::cout<<" Y = "<<this->y<<std::endl;
}
void Coordinates::addCoordinates(const Coordinates& c1,const Coordinates& c2)
{
int a;
int b;
a=c1.getX()+c2.getX();
b=c1.getY()+c2.getY();
std::cout<<"("<<a<<","<<b<<")"<<std::endl;
} 
void Coordinates::subCoordinates(const Coordinates& c1,const Coordinates& c2)
{
int a;
int b;
a=c1.getX()-c2.getX();
b=c1.getY()-c2.getY();
std::cout<<"("<<a<<","<<b<<")"<<std::endl;
} 
void Coordinates::findQuadrant()
{
if(this->x==0 && this->y==0)
{
std::cout<<"point lies in origin"<<std::endl;
}
else if((this->x)>0 && (this->y)>0)
{
std::cout<<"point lies in 1st quadrant"<<std::endl;
}
else if((this->x)>0 && (this->y)<0)
{
std::cout<<"point lies in 4th quadrant"<<std::endl;
}
else if((this->x)<0 && (this->y)<0)
{
std::cout<<"point lies in 3rd quadrant"<<std::endl;
}
else if((this->x)<0 && (this->y)>0)
{
std::cout<<"point lies in 2nd quadrant"<<std::endl;
}
}
void Coordinates::check(const Coordinates& c1,const Coordinates& c2)
{
if(c1.getX()==0 && c1.getY()==0 && c2.getX()==0 && c2.getY()==0)
{
std::cout<<"Both Points lie in origin"<<std::endl;
}
else if(c1.getX()>0 && c1.getY()>0 && c2.getX()>0 && c2.getY()>0)
{
std::cout<<"both quadrants lie in 1st quadrant"<<std::endl;
}
else if(c1.getX()>0 && c1.getY()<0 && c2.getX()>0 && c2.getY()<0)
{
std::cout<<"both quadrants lie in 4th quadrant"<<std::endl;
}
else if(c1.getX()<0 && c1.getY()>0 && c2.getX()<0 && c2.getY()>0)
{
std::cout<<"both quadrants lie in 2nd quadrant"<<std::endl;
}
else if(c1.getX()<0 && c1.getY()<0 && c2.getX()<0 && c2.getY()<0)
{
std::cout<<"both quadrants lie in 1st quadrant"<<std::endl;
}
else{
std::cout<<"both points are not in the same quadrant"<<std::endl;
}
}
void average(Coordinates& c1,Coordinates& c2)
{
	int a;
	int b;
	a=c1.x+c2.x;
	b=c1.y+c2.y;
	a/=2;
	b/=2;
	std::cout<<"("<<a<<","<<b<<")"<<std::endl;
}
