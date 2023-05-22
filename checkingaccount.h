#include"account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount:public account{
	private:
		double fee;
	public:
		CheckingAccount();
		CheckingAccount(const double,const double);
		~CheckingAccount();
		void Credit(const double);
		bool Debit(const double);
};
#endif
