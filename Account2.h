#include"Account.h"
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount:public account{
	protected:
		double InterestRate;
	public:
		SavingsAccount()
		{
			this->InterestRate=0.0;
		}
		SavingsAccount(const double Account_Balance,const double InterestRate)
		{
			this->Account_Balance=Account_Balance;
			this->InterestRate=InterestRate;
		}
		~SavingsAccount()
		{
			this->InterestRate=0.0;
		}
		double CalculateInterest()
		{
			double sub;
			sub=(this->InterestRate)/100;
			return ((this->getBalance())*(sub));
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
