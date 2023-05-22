#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H
class shape{
	protected:
	   int height;
	   int length;
	   int breadth;
	public:
	  shape();
	  virtual ~shape();
          virtual void draw();
	  virtual void calcArea();
          int getheight()const;
	  int getLength()const;
	  int getBreadth()const;
          void setLength(const int);
	  void setBreadth(const int);
          void setHeight(const int);
};
#endif