#include<iostream>
#include"person.h"
int main()
{
	possessions p1(5);
	p1.setdata();
	person p("mr singh",p1);
	p.Persondisplay();
}
