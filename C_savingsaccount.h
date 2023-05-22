#include"account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount:public account{
	private:
		double InterestRate;
	public:
		SavingsAccount();
		SavingsAccount(const double,const double);
		~SavingsAccount();
		double CalculateInterest()const;
};
#endif
