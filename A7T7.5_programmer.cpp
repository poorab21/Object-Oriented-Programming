#include"programmer.h"

programmer::programmer()
{
	this->languages="";
}
programmer::~programmer()
{
	this->languages="";
}
void programmer::setName(const std::string name)
{
	this->name=name;
}
void programmer::setEmpNo(const int empNO)
{
	this->empNO=empNO;
}
void programmer::setExperience(const int experience)
{
	this->experience=experience;
}
std::string programmer::getName()const
{
	return this->name;
}
int programmer::getExperience()const
{
	return this->experience;
}
int programmer::getEmpNo()const
{
	return this->empNO;
}
void programmer::setLanguages(const std::string languages)
{
	this->languages=languages;
}
std::string programmer::getLanguages()const
{
	return this->languages;
}
void programmer::display()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"Experience = "<<this->experience<<std::endl;
	std::cout<<"Employee Number = "<<this->empNO<<std::endl;
	std::cout<<"Language = "<<this->languages<<std::endl;
}
