#include<iostream>
#include"Account.h"
int main()
{
	BankAccount b1(10000);
	b1.credit(12000);
	b1.debit(35000);
	BankAccount b2(13000);
	b2.credit(15000);
	b2.debit(12000);
	std::cout<<b2.getBalance();
}
