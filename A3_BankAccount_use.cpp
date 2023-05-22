#include<iostream>
#include"BankAccount.h"
int main()
{
	BankAccount sub(1,"robbie reynolds",15000);
	BankAccount sub2(2,"andy singh",30000);
	BankAccount sub3(3,"molly mehta",45000);
	sub.Credit(5000);
	sub2.Credit(1500);
	sub3.Credit(2500);
	sub.display();
	sub2.display();
	sub3.display(); 
}
