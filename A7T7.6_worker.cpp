#include"worker.h"

worker::worker()
{
	this->weekSalary=0.0;
	this->work_hours_per_day=0;
}
worker::worker(const float weekSalary,const int work_hours_per_day)
{
	this->weekSalary=weekSalary;
	this->work_hours_per_day=work_hours_per_day;
}
worker::~worker()
{
	this->weekSalary=0.0;
	this->work_hours_per_day=0;
}
void worker::setFirstName(const std::string firstname)
{
	this->firstname=firstname;
}
void worker::setLastName(const std::string lastname)
{
	this->lastname=lastname;
}
std::string worker::getFirstName()const
{
	return this->firstname;
}
std::string worker::getLastName()const
{
	return this->lastname;
}
void worker::setWeekSalary(const float weekSalary)
{
	this->weekSalary=weekSalary;
}
void worker::setWorkHours(const int work_hours_per_day)
{
	this->work_hours_per_day=work_hours_per_day;
}
float worker::getWeekSalary()const
{
	return this->weekSalary;
}
int worker::getWorkHours()const
{
	return this->work_hours_per_day;
}
float worker::MoneyPerHour()
{
	float salary_day=(this->weekSalary)/7;
	salary_day/=this->work_hours_per_day;
	return salary_day;
}
void worker::display()
{
	std::cout<<"First Name = "<<this->firstname<<std::endl;
	std::cout<<"Last Name = "<<this->lastname<<std::endl;
	std::cout<<"Weekly Wage = "<<this->weekSalary<<std::endl;
	std::cout<<"Work Hours Per Day = "<<this->work_hours_per_day<<std::endl;
}
