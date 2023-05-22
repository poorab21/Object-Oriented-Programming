#include<iostream>

class Coordinates{
private:
float x;
float y;
public:
Coordinates();
Coordinates(const float,const float);
~Coordinates();
Coordinates(const Coordinates&);
int getX()const;
int getY()const;
void setX(const float);
void setY(const float);
void display();
void addCoordinates(const Coordinates&,const Coordinates&);
void subCoordinates(const Coordinates&,const Coordinates&);
void distance(const Coordinates&,const Coordinates&);
void distancefromOrigin(const Coordinates&);
void findQuadrant();
void check(const Coordinates&,const Coordinates&);
friend void average(Coordinates&,Coordinates&);
};
