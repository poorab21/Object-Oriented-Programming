#include"account.h"

account::account()
		{
			this->Balance=0;
		}
account::account(const double Balance)
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
account::~account()
		{
			this->Balance=0;
		}
void account::Credit(const double amount)
		{
			this->Balance+=amount;
		}
bool account::Debit(const double amount)
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
double account::getBalance()const
		{
			return this->Balance;
		}
