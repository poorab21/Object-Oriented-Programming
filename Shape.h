#include<iostream>

class shape{
       private:
          int width;
          int height;
          int area;
       public:
          shape();
          shape(const int,const int);
          ~shape();
          void FindArea();
          void setwidth(const int);
          void setheight(const int);
          int getwidth()const;
          int getheight()const;
          void display();
          void DetermineSquare(const shape&);
          friend void compare(const shape&,const shape&);
      };
          
