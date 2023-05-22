#include"account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount:public account{
	private:
		double fee;
	public:
		CheckingAccount();
		CheckingAccount(const double balance,const double fee);
		~CheckingAccount();
		void Credit(const double amount);
		bool Debit(const double amount);
		double getBalance()const;
};
#endif
