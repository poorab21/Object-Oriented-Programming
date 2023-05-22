#include<iostream>
#include<string.h>
class customer{
	private:
		char name[30];
		int number;
		char membership[20];
	public:
		customer();
		~customer();
		customer(char [],int,char []);
		void display();
};
