#include<iostream>
#include<string.h>
class BloodDonor{
	private:
		char *name=new char[30];
		long long mobile_number;
		float bmi;
		char *bloodgroup=new char[20];
		int age;
	public:
		BloodDonor();
		~BloodDonor();
		BloodDonor(char *,long long,float,char *,int);
		int getAGE()const;
		char* getNAME()const;
		long long getNUMBER()const;
		float getBMI()const;
		char* getBLOODGROUP()const;
};
