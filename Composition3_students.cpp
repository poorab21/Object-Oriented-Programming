#include<iostream>
class students{
	private:
		int number;
		std::string name[100];
	public:
		students();
		students(const int);
		~students();
		std::string& operator [](const int);
		void setStudents();
};
students::students()
{
	this->number=0;
}
students::students(const int number)
{
	this->number=number;
}
students::~students()
{
	this->number=0;
}
void students::setStudents()
{
	std::cout<<"Enter student Names:"<<std::endl;
	for(int i=0;i<(this->number);i++)
	{
		getline(std::cin,this->name[i]);
	}
}
std::string& students::operator [](const int n)
{
	return this->name[n];
}
