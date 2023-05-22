#include"account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount:public account{
	private:
		double InterestRate;
	public:
		SavingsAccount();
		SavingsAccount(const double balance,const double InterestRate);
		~SavingsAccount();
		double CalculateInterest()const;
		double getBalance()const;
};
#endif
