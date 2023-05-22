#include"shape.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H
class triangle:public shape{
	protected:
	  int height;
	  int breadth;
	  int length;
	public:
           triangle();
	   ~triangle();
	   void draw();
	   void calcArea();
	   virtual void calcPerimeter();

	int getheight()const;
	  int getLength()const;
	  int getBreadth()const;
          void setLength(const int);
	  void setBreadth(const int);
          void setHeight(const int);
};
#endif