#include<iostream>

class Customer{
	private:
		char name[30];
		char membership[20];
		int number;
	public:
	Customer();
	~Customer();
	Customer display(Customer,Customer);	
	void show();	
};


