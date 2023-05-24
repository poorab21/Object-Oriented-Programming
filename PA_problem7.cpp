#include<iostream>
int main()
{
	int currentbalance;
	int withdrawal;
	int available_balance;
	int pincode=1234;
	int pincode2;
	int number=0;
	std::cout<<"enter your current balance:"<<std::endl;
	std::cin>>currentbalance;
	std::cout<<"enter withdrawal amount:"<<std::endl;
	std::cin>>withdrawal;
	std::cout<<"enter available balance:"<<std::endl;
	std::cin>>available_balance;
	std::cout<<"enter PIN Code:"<<std::endl;
	std::cin>>pincode2;
	if(pincode !=pincode2)
	{
		std::cout<<"\t\tError:PIN code Invalid "<<std::endl;
		number++;
	}
	if(withdrawal>currentbalance)
	{
		std::cout<<"Error:Withdrawal amount Exceeds your Available balance "<<std::endl;
		number++;
	}
	if(withdrawal>available_balance)
	{
		std::cout<<"Error:Withdrawal amount Exceeds ATM Balance "<<std::endl;
		number++;
	}
	if(withdrawal>25000)
	{
		std::cout<<"Error:Withdrawal amount Exceed $25,000"<<std::endl;
		number++;
	}
	if(number==0)
	{
		std::cout<<"Cash Successfully Withdrawn!"<<std::endl;
	}
	else if(number>0)
	{
		main();
	}
}
