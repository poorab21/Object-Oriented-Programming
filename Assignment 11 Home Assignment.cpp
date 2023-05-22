#include<iostream>
#include<memory>
int main()
{
std::unique_ptr<int> uni_ptr1(new int(1));
std::unique_ptr<int> uni_ptr2(new int(2));
std::cout<<"Value of uni_ptr2 = "<<*uni_ptr2<<std::endl;
uni_ptr2=std::move(uni_ptr1);

int *value=new int(12);
std::shared_ptr<int> sh_ptr1(value);
std::shared_ptr<int> sh_ptr2(sh_ptr1);
std::shared_ptr<int> sh_ptr3(sh_ptr1);

std::cout<<"Value of sh_ptr1 = "<<*sh_ptr1<<std::endl;
std::cout<<"Value of sh_ptr2 = "<<*sh_ptr2<<std::endl;
std::cout<<"Value of sh_ptr3 = "<<*sh_ptr3<<std::endl;

std::cout<<"Count using sh_ptr1 = "<<sh_ptr1.use_count()<<std::endl;
sh_ptr1.reset();
std::cout<<"Count of sh_ptr1 after reset = "<<sh_ptr1.use_count()<<std::endl;
std::cout<<"Count of sh_ptr2 = "<<sh_ptr2.use_count()<<std::endl;
}