#include"SavingsAccount.h"

SavingsAccount::SavingsAccount()
		{
			this->InterestRate=0.0;
		}
SavingsAccount::SavingsAccount(const double balance,const double InterestRate)
		{
			account::Balance=balance;
			this->InterestRate=InterestRate;
		}
SavingsAccount::~SavingsAccount()
		{
			this->InterestRate=0.0;
		}
double SavingsAccount::CalculateInterest()const
		{
			double sub=(this->InterestRate/100);
			return (sub)*(Balance);
		}
double SavingsAccount::getBalance()const
		{
			return account::getBalance();
		}

