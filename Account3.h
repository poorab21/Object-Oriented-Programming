#include"Account.h"
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
		CheckingAccount(const double Account_Balance,const double fee)
		{
			account::Account_Balance=Account_Balance;
			this->fee=fee;
		}
		~CheckingAccount()
		{
			this->fee=0.0;
		}
		void Credit(const double increment)
		{
			account::Credit(increment-(this->fee));
		}
		void Debit(const double withdrawal)
		{
			if(account::Debit(withdrawal)==true)
			{
				account::Debit(this->fee);
			}
		}
};
#endif
