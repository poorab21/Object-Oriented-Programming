#include<iostream>
#include"inhabitants.h"
#include"house.h"
int main()
{
	inhabitants *h1=new inhabitants(6);
	house h(12000,"yellow",h1);
	h.display();
}
