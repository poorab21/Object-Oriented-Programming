#include<iostream>
#include"time.h"
int main()
{
time t1(12,22,33);
time t2(2,2,11);
t1-=t2;
t1.display();
}