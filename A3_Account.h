#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class BankAccount{
	private:
		int balance;
	public:
		BankAccount();
		BankAccount(const int);
		~BankAccount();
		void credit(const int);
		void debit(const int);
		int getBalance()const;
};
#endif
