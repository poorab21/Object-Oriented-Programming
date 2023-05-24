#include<iostream>
#include"car.h"
int main()
{
passenger *p=new passenger("mr singh","kfj");
passenger *p2=new passenger("mr singh 2","kjl");
car c(p2,2011,8,"green");
c.display();
}