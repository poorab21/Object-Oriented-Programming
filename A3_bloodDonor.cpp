#include<iostream>
#include"bloodDonor.h"
#include<string.h>
BloodDonor::BloodDonor()
{
	strcpy(name,"unknown");
	strcpy(bloodgroup,"unknown");
	mobile_number=0;
	bmi=0;
	age=0;
}
BloodDonor::~BloodDonor()
{
	delete[] name;
	strcpy(bloodgroup," ");
	mobile_number=0;
	bmi=0;
	age=0;
}
BloodDonor::BloodDonor(char *n,long long m,float b,char *blood,int a)
{
	strcpy(name,n);
	strcpy(bloodgroup,blood);
	bmi=b;
	mobile_number=m;
	age=a;
}
int BloodDonor::getAGE()const
{
	return age;
}
char* BloodDonor::getNAME()const
{
	return name;
}
long long BloodDonor::getNUMBER()const
{
	return mobile_number;
}
float BloodDonor::getBMI()const
{
	return bmi;
}
char* BloodDonor::getBLOODGROUP()const
{
	return bloodgroup;
}
