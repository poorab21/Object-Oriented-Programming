#include<iostream>
class BankAccount{
	private:
		int account_number;
		std::string account_holder;
		double balance;
	public:
		BankAccount();
		BankAccount(int,std::string,double);
		~BankAccount();
		void Credit(double);
		void display();
};
