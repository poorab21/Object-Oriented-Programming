#include<iostream>
#include"oop2.h"
int main()
{
	info sub;
	info *sub2=&sub;
	sub2->setNAME("hello there");
	sub2->setX(12);
	sub.display();
}
