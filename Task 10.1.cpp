#include<iostream>
#include<exception>
class Exception:public std::exception{
	public:
	const char* what() const throw()
	{
		return "Error";
	}	
};
void functionA()
{
	try
	{
		throw Exception();
	}
	catch(Exception& e)
	{
		std::cout<<"Exception in Function A = "<<e.what()<<std::endl;
		throw;
	}
}
void functionB()
{
	try
	{
		functionA();
	}
	catch(Exception& e)
	{
		std::cout<<"Exception in function B = "<<e.what()<<std::endl;
		throw;
	}
}
int main()
{
	try
	{
		functionB();
	}
	catch(Exception& e)
	{
		std::cout<<"Exception in Main() = "<<e.what()<<std::endl;
	}
}
