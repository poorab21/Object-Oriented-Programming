#include"SavingsAccount.h"
#include"CheckingAccount.h"
int main()
{
	account *c1[5];
	c1[0]=new CheckingAccount(16000,1200);
	c1[1]=new CheckingAccount(25000,900);
	c1[2]=new SavingsAccount(34000,5);
	c1[3]=new SavingsAccount(60000,8);
	c1[4]=new CheckingAccount(50000,1200);
	c1[0]->Credit(1500);
	c1[1]->Debit(2100);
	c1[4]->Debit(2500);
	for(int i=0;i<5;i++)
	{
		if(typeid(*c1[i])==typeid(SavingsAccount))
		{
			c1[i]->Credit(c1[i]->CalculateInterest());
		}
		else if(typeid(*c1[i])==typeid(CheckingAccount))
		{
			std::cout<<"Account from Array Number "<<i<<" is Checking Account"<<std::endl;
		}
	}
	c1[2]->Credit(1500);
	for(int i=0;i<5;i++)
	{
		std::cout<<c1[i]->getBalance()<<std::endl;
	}  
} 