#include<iostream>
#ifndef POINT_H
#define POINT_H
class point{
     private:
          int x;
          int y;
     public:
          point();
          point(const int,const int);
          int getX()const;
          int getY()const;
          void setX(const int);
          void setY(const int);
          void display();
};
#endif
