#include"shape.h"
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
class quadrilateral:public shape{
	public:
          quadrilateral();
	  ~quadrilateral();
          void draw();
	  void calcArea();
	int getheight()const;
	  int getLength()const;
	  int getBreadth()const;
          void setLength(const int);
	  void setBreadth(const int);
          void setHeight(const int);
};
#endif