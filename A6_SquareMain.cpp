#include<iostream>
#include"Square.h"
int main()
{
square s1;
square s2;
std::cout<<s1(12)<<std::endl;
std::cout<<s2(22)<<std::endl;
s2=s1;
s2.showinfo();
}
