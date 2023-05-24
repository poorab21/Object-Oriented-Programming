#include<iostream>
#include"students.cpp"
class classroom{
	private:
		std::string room_number;
		std::string teacher;
		students s1;
	public:
		classroom();
		classroom(const std::string,const std::string,const students&);
		~classroom();
		void setInfo();
		void display();
};
classroom::classroom()
{
	this->room_number=" ";
	this->teacher=" ";
}
classroom::classroom(const std::string room_number,const std::string teacher,const students& s1)
{
	this->room_number=room_number;
	this->teacher=teacher;
	this->s1=s1;
}
classroom::~classroom()
{
	this->room_number=" ";
	this->teacher=" ";
}
void classroom::display()
{
	int i=0;
	std::cout<<"Class Number = "<<this->room_number<<std::endl;
	std::cout<<"Class Teacher = "<<this->teacher<<std::endl;
	do
	{
		std::cout<<s1[i]<<std::endl;
		i++;
	}
	while(s1[i] !="");
}
void classroom::setInfo()
{
	s1.setStudents();
}
int main()
{
	students s1(5);
	classroom c1("KL22 AQ","mr singh",s1);
	c1.setInfo();
	c1.display();
}
