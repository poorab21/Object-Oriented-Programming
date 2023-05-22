#include<iostream>
#include"BankAccount.h"

BankAccount::BankAccount()
{
	account_number=0;
	account_holder=" ";
	balance=0;
}

BankAccount::BankAccount(int n,std::string h,double b)
{
	account_number=n;
	account_holder=h;
	balance=b;
}

BankAccount::~BankAccount()
{
	account_number=0;
	account_holder=" ";
	balance=0;
}

void BankAccount::Credit(double x)
{
    balance+=x;
}
void BankAccount::display()
{
	std::cout<<"Account number = "<<account_number<<std::endl;
	std::cout<<"Account holder's name = "<<account_holder<<std::endl;
	std::cout<<"Account Balance = "<<balance<<std::endl;
}
