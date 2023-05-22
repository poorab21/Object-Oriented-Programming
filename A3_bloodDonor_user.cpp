#include<iostream>
#include<string.h>
#include"bloodDonor.h"
int main()
{
	BloodDonor sub("rodney",923001234567,12.21,"O-positive",12);
	std::cout<<"Number = "<<sub.getNUMBER()<<std::endl;
	std::cout<<"Age = "<<sub.getAGE()<<std::endl;
	std::cout<<"BMI = "<<sub.getBMI()<<std::endl;
	std::cout<<"Name = "<<sub.getNAME()<<std::endl;
	std::cout<<"BloodGroup = "<<sub.getBLOODGROUP()<<std::endl;
	std::cout<<std::endl;
	BloodDonor sub2("howard",9203001234567,11,"B-positive",15);
	std::cout<<"Number = "<<sub2.getNUMBER()<<std::endl;;
	std::cout<<"Age = "<<sub2.getAGE()<<std::endl;;
	std::cout<<"BMI = "<<sub2.getBMI()<<std::endl;;
	std::cout<<"Name = "<<sub2.getNAME()<<std::endl;
	std::cout<<"BloodGroup = "<<sub2.getBLOODGROUP()<<std::endl;
}
