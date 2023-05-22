#include<iostream>
#include"ComplexNumbers.h"
int main()
{
complexnumbers *p1=new complexnumbers();
p1->setreal(-2);
p1->setimaginary(-2);
complexnumbers *p2=new complexnumbers();
p2->setreal(15);
p2->setimaginary(-14);
complexnumbers sub3;
sub3.addreal(*p1,*p2);
sub3.subreal(*p1,*p2);
sub3.addimaginary(*p1,*p2);
sub3.subimaginary(*p1,*p2);
sub3.addnumbers(*p1,*p2);
sub3.subnumbers(*p1,*p2);
p1->display();
}
