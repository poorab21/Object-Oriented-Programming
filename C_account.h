#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account{
	protected:
		double Balance;
	public:
		account();
		account(const double);
		~account();
		void Credit(const double);
		bool Debit(const double);
		double getBalance()const;
};
#endif
