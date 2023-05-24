#include"Account3.h"
#include"Account2.h"
int main()
{
	account a1;
	CheckingAccount c1(12000,300);
	c1.Credit(1200);
	std::cout<<c1.getBalance();
}
