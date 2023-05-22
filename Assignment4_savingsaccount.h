#include"account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount:public account{
	protected:
		double InterestRate;
		account *a;
	public:
		SavingsAccount()
		{
			this->InterestRate=0.0;
		}
		SavingsAccount(account *a,const double InterestRate)
		{
			this->a=a;
			this->InterestRate=InterestRate;
		}
		~SavingsAccount()
		{
			this->InterestRate=0.0;
			delete a;
		}
		double CalculateInterest()
		{
			double sub;
			sub=(this->InterestRate)/100;
			return ((this->a->getBalance())*(sub));
		}
	/*	void Credit(const double increment)
		{
			this->a->Credit(increment);
		}
		void Debit(const double decrement)
		{
			this->a->Debit(decrement);
		}     */
};
#endif
