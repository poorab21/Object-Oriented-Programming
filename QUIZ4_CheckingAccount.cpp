#include"CheckingAccount.h"

CheckingAccount::CheckingAccount()
		{
			this->fee=0.0;
		}
CheckingAccount::CheckingAccount(const double balance,const double fee)
		{
			this->fee=fee;
			account::Balance=balance;
		}
CheckingAccount::~CheckingAccount()
		{
			this->fee=0.0;
		}
void CheckingAccount::Credit(const double amount)
		{
			account::Credit(amount-(this->fee));
		}
bool CheckingAccount::Debit(const double amount)
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
double CheckingAccount::getBalance()const
		{
			return account::getBalance();
		}
