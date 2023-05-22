#include"SavingsAccount.h"
#include"CheckingAccount.h"
int main()
{
	account a(50000);
	a.Credit(12000);
	a.Debit(15000);
	std::cout<<a.getBalance();
	CheckingAccount a1(25000,1200);
	a1.Credit(2000);
	std::cout<<a1.getBalance()<<std::endl;
	SavingsAccount a2(41120,2.89);
	a2.Credit(a2.CalculateInterest());
	std::cout<<a2.getBalance()<<std::endl; 
}
