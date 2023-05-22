#include<iostream>
#include"Account.h"

BankAccount::BankAccount()
{
	balance=0;
}
BankAccount::~BankAccount()
{
	balance=0;
}
BankAccount::BankAccount(const int balance)
{
	if(balance>=0)
	{
	this->balance=balance;
    }
    else if (balance<0)
    {
    	this->balance=0;
    	std::cout<<"Invalid Initial Balance"<<std::endl;
	}
}
void BankAccount::credit(const int amount)
{
	this->balance+=amount;
}
void BankAccount::debit(const int withdrawal)
{
	if(withdrawal>(this->balance))
	{
		std::cout<<"Debit Amount Exceeded Account Balance"<<std::endl;
	}
	else if(withdrawal<=(this->balance))
	{
		this->balance-=withdrawal;
	}
}
int BankAccount::getBalance()const
{
	return balance;
}

