#include"account.h"
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
class CheckingAccount:public account{
	private:
		double fee;
		account *a;
	public:
		CheckingAccount()
		{
			this->fee=0.0;
		}
		CheckingAccount(account *a,const double fee)
		{
			this->a=a;
			this->fee=fee;
		}
		~CheckingAccount()
		{
			this->fee=0.0;
			delete a;
		}
		void Credit(const double increment)
		{
			double sub;
			this->a->Credit(increment-this->fee);
		}
		void Debit(const double withdrawal)
		{
			double sub;
			if(this->a->Debit(withdrawal)==true)
			{
				this->a->Debit(this->fee);
			}
		}
};
#endif
