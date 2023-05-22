#include"savingsaccount.h"
#include"checkingaccount.h"
#include"account.h"
int main()
{
	account a1(18000);
	CheckingAccount s1(&a1,1200);
	s1.Debit(2211);
	s1.Credit(2500);
	std::cout<<a1.getBalance();
	
//	SavingsAccount s1(&a1,8);
//	s1.Credit(s1.CalculateInterest());
//	std::cout<<s1.getBalance()<<std::endl;
}
