#include"quadrilateral.h"
#ifndef SQUARE_H
#define SQUARE_H
class square:public quadrilateral{
	protected:
	  int length;
	  int breadth;
	  int height;
	public:
         square();
	~square();
	 void calcArea();
	 void Draw();
	int getheight()const;
	  int getLength()const;
	  int getBreadth()const;
          void setLength(const int);
	  void setBreadth(const int);
          void setHeight(const int);
};
#endif