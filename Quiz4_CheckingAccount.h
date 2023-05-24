#include"account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount:public account{
	private:
		double fee;
	public:
		CheckingAccount()
		{
			this->fee=0.0;
		}
		CheckingAccount(const double balance,const double fee)
		{
			this->fee=fee;
			account::Balance=balance;
		}
		~CheckingAccount()
		{
			this->fee=0.0;
		}
		void Credit(const double amount)
		{
			account::Credit(amount-(this->fee));
		}
		bool Debit(const double amount)
		{
			if(account::Debit(amount)==true)
			{
				account::Debit((this->fee));
				return true;
			}
			else
			{
				std::cout<<"Debit Amount Exceeds Balance"<<std::endl;
				return false;
			}
		}
		double getBalance()const
		{
			return account::getBalance();
		}
};
#endif
