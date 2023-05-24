#include<iostream>
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
};
point::point()
{
this->x=0;
this->y=0;
}
point::point(const int x,const int y)
{
this->x=x;
this->y=y;
}
int point::getX()const
{
return this->x;
}
int point::getY()const
{
return this->y;
}
void point::setX(const int x)
{
this->x=x;
}
void point::setY(const int y)
{
this->y=y;
}
void operator ++(point& p,int)
{
int sub;
int sub2;
sub=p.getX();
sub2=p.getY();
sub++;
sub2++;
p.setX(sub);
p.setY(sub2);
}
void operator --(point& p,int)
{
int sub;
int sub2;
sub=p.getX();
sub2=p.getY();
sub--;
sub2--;
p.setX(sub);
p.setY(sub2);
}
void display(point& p)
{
std::cout<<"X = "<<p.getX()<<std::endl;
std::cout<<"Y = "<<p.getY()<<std::endl;
}
int main()
{
point p1(1,2);
p1++;
p1++;
display(p1);
p1--;
display(p1);
}