#include<iostream>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account{
	protected:
		double Account_Balance;
	public:
		account()
		{
			this->Account_Balance=0.0;
		}
		account(const double Account_Balance)
		{
			if(this->Account_Balance>=0.0)
			{
			this->Account_Balance=Account_Balance;
			}
			else
			{
				this->Account_Balance=0.0;
				std::cout<<"Initial Amount must be greater than 0"<<std::endl;
			}
		}
		void Credit(const double increment)
		{
			this->Account_Balance+=increment;
		}
		bool Debit(const double withdrawal)
		{
			if(withdrawal>(this->Account_Balance))
			{
				std::cout<<"Withdrawal Amount Exceeds Balance"<<std::endl;
				return false;
			}
			else if(withdrawal<(this->Account_Balance))
			{
				this->Account_Balance-=withdrawal;
				return true;
			}
		}
		double getBalance()const
		{
			return this->Account_Balance;
		}
		void setBalance(const double Account_Balance)
		{
			this->Account_Balance=Account_Balance;
		}
		~account()
		{
			this->Account_Balance=0.0;
		}
};
#endif
