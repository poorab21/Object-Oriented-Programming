#include<iostream>
#include<exception>
#include<stdexcept>
int main()
{
	int age;
	std::cout<<"Enter Age(Must be greater than 10):"<<std::endl;
	std::cin>>age;
	try
	{
		if(age<=10)
		{
			throw std::range_error("Range Error");
		}
	}
	catch(std::range_error& e)
	{
		std::cerr<<e.what()<<std::endl;
	}
}
