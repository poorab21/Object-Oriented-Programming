#include<iostream>
#include"employee.h"
employee::employee()
{
	
	std::cout<<"enter employee number:"<<std::endl;
	std::cin>>employee_number;
	std::cout<<"enter year:"<<std::endl;
	std::cin>>year;
	std::cout<<"enter salary:"<<std::endl;
	std::cin>>salary;
	salary=NetSalary(salary);
	system("cls");
}
employee::~employee()
{
	employee_number--;
	year=0;
	salary=0;
}
float employee::NetSalary(float salary)
{
	int late_fine=0;
	int leave=0;
	int loans=0;
	std::string answer1;
	std::string answer2;
	std::string answer3;
	std::cout<<"have you ever been been late to work:"<<std::endl;
	std::cin>>answer1;
	if(answer1=="yes")
	{
		std::cout<<"how many times:"<<std::endl;
		std::cin>>late_fine;
		late_fine*=100;
	}
	std::cout<<"have you ever taken a loan from the company:"<<std::endl;
	std::cin>>answer2;
	if(answer2=="yes")
	{
		std::cout<<"how much:"<<std::endl;
		std::cin>>loans;
	}
	std::cout<<"have you ever taken leaves :"<<std::endl;
	std::cin>>answer3;
	if(answer3=="yes")
	{
		std::cout<<"how many :"<<std::endl;
		std::cin>>leave;
		leave*=100;
	}
	salary-=(late_fine+loans+leave);
	return salary;
}
void employee::displayinfo()
{
	std::cout<<"Employee Number = "<<employee_number<<std::endl;
	std::cout<<"Year Of Joining = "<<year<<std::endl;
	std::cout<<"Employee Salary = "<<salary<<std::endl;
}

