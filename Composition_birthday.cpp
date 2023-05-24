#include"birthday.h"

birthday::birthday()
{
this->day=0;
this->month=" ";
this->year=0;
}
birthday::birthday(const int day,const std::string month,const int year)
{
this->day=day;
this->month=month;
this->year=year;
}
birthday::~birthday()
{
this->day=0;
this->month=" ";
this->year=year;
}
void birthday::show()
{
std::cout<<day<<"/"<<month<<"/"<<year<<std::endl;
}