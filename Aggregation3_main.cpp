#include<iostream>
#include"house.h"
int main()
{
	inhabitants *h1=new inhabitants(30);
	house h(31988,"yellow",h1);
	h.display();
}
