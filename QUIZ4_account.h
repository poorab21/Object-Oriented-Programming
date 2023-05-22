#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account{
	protected:
		double Balance;
	public:
		account();
		account(const double Balance);
		~account();
		virtual void Credit(const double amount);
		virtual bool Debit(const double amount);
		virtual double getBalance()const;
		virtual double CalculateInterest()const{};
};
#endif
