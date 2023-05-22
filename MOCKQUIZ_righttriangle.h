#include"triangle.h"
#ifndef RIGHTTRAINGLE_H
#define RIGHTTRAINGLE_H
class righttriangle{
	protected:
	  int length;
	  int breadth;
	  int height;
	public:
          righttriangle();
          ~righttriangle();
	  void calcArea();
	  void Draw();
	  void calcPerimeter();
	  int getheight()const;
	  int getLength()const;
	  int getBreadth()const;
          void setLength(const int);
	  void setBreadth(const int);
          void setHeight(const int);
};
#endif