#include<iostream>
#include<memory>
int main()
{
std::unique_ptr<int> ptr1(new int(10));
std::unique_ptr<int> ptr2(new int(20));
std::unique_ptr<int> ptr3(new int(30));

std::cout<<"*ptr1 = "<<*ptr1<<std::endl;
std::cout<<"*ptr2 = "<<*ptr2<<std::endl;
std::cout<<"*ptr3 = "<<*ptr3<<std::endl;

ptr3=std::move(ptr2);

std::cout<<"*ptr1 = "<<*ptr1<<std::endl;
std::cout<<"*ptr3 = "<<*ptr3<<std::endl;
//std::cout<<"*ptr2 = "<<*ptr2<<std::endl; /* ptr2 has no object anymore */
}