#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account{
	protected:
		double Account_Balance;
	public:
		account()
		{
			Account_Balance=0.0;
		}
		account(const double AccountBalance)
		{
			if(Account_Balance>=0.0)
			{
			Account_Balance=AccountBalance;
			}
			else
			{
				Account_Balance=0.0;
				std::cout<<"Initial Amount must be greater than 0"<<std::endl;
			}
		}
		void Credit(const double increment)
		{
			Account_Balance+=increment;
		}
		bool Debit(const double withdrawal)
		{
			if(withdrawal>(Account_Balance))
			{
				std::cout<<"Withdrawal Amount Exceeds Balance"<<std::endl;
				return false;
			}
			else if(withdrawal<(Account_Balance))
			{
				Account_Balance-=withdrawal;
				return true;
			}
		}
		double getBalance()const
		{
			return Account_Balance;
		}
		void setBalance(const double AccountBalance)
		{
			Account_Balance=AccountBalance;
		}
		~account()
		{
			Account_Balance=0.0;
		}
};
#endif
