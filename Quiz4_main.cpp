#include"SavingsAccount.h"
#include"CheckingAccount.h"
int main()
{
/*	account *c1[5];
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
	}
	for(int i=0;i<5;i++)
	{
		std::cout<<c1[i]->getBalance()<<std::endl;
	}  */
	account *c1[5];
	SavingsAccount s1(25000,12);
	SavingsAccount s2(32000,11);
	CheckingAccount c(10000,1000);
	CheckingAccount c2(30000,1200);
	CheckingAccount c3(40000,5000);
	
	c1[0]=&s1;
	c1[1]=&s2;
	c1[2]=&c;
	c1[3]=&c2;
	c1[4]=&c3;
	c1[2]->Credit(1200);
	c1[3]->Debit(3000);
	c1[4]->Credit(4500);
	for(int i=0;i<5;i++)
	{
		if(typeid(*c1[i])==typeid(SavingsAccount))
		{
			c1[i]->Credit(c1[i]->CalculateInterest());
		}
	}
	c1[0]->Credit(1500);
	c1[1]->Credit(2500);
//	for(int i=0;i<5;i++)
//	{
//		std::cout<<c1[i]->getBalance()<<std::endl;
//	}
	std::cout<<s1.getBalance()<<std::endl;
	std::cout<<s2.getBalance()<<std::endl;
	std::cout<<c.getBalance()<<std::endl;
	std::cout<<c2.getBalance()<<std::endl;
	std::cout<<c3.getBalance()<<std::endl;
}
