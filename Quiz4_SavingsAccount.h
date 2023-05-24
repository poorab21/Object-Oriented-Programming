#include"account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount:public account{
	private:
		double InterestRate;
	public:
		SavingsAccount()
		{
			this->InterestRate=0.0;
		}
		SavingsAccount(const double balance,const double InterestRate)
		{
			account::Balance=balance;
			this->InterestRate=InterestRate;
		}
		~SavingsAccount()
		{
			this->InterestRate=0.0;
		}
		double CalculateInterest()const
		{
			double sub=(this->InterestRate/100);
			return (sub)*(Balance);
		}
		double getBalance()const
		{
			return account::getBalance();
		}
};
#endif
