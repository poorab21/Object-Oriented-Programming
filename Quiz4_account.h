#include<iostream>
#include<typeinfo.h>
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account{
	protected:
		double Balance;
	public:
		account()
		{
			this->Balance=0;
		}
		account(const double Balance)
		{
			if(Balance>=0.0)
			{
				this->Balance=Balance;
			}
			else 
			{
				this->Balance=0.0;
				std::cout<<"Initial Balance Invalid"<<std::endl;
			}
		}
		~account()
		{
			this->Balance=0;
		}
		virtual void Credit(const double amount)
		{
			this->Balance+=amount;
		}
		virtual bool Debit(const double amount)
		{
			if(amount<=(this->Balance))
		{
			this->Balance-=amount;
			return true;
		}
		else if(amount>(this->Balance))
		{
			std::cout<<"Debit Amount Exceeds Balance"<<std::endl;
			return false;
		}
		}
		virtual double getBalance()const
		{
			return this->Balance;
		}
		virtual double CalculateInterest()const{};
};
#endif
