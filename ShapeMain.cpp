#include<iostream>
#include"Shape.h"
int main()
{
shape *ptr=new shape();
shape *ptr2=new shape();
ptr->setwidth(12);
ptr->setheight(12);
ptr2->setwidth(13);
ptr2->setheight(13);
ptr->FindArea();
ptr->DetermineSquare(*ptr);
compare(*ptr,*ptr2);
}