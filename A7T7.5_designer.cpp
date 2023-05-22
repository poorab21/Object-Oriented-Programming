#include"designer.h"

designer::designer()
{
	this->field="";
}
designer::~designer()
{
	this->field="";
}
void designer::setName(const std::string name)
{
	this->name=name;
}
void designer::setEmpNo(const int empNO)
{
	this->empNO=empNO;
}
void designer::setExperience(const int experience)
{
	this->experience=experience;
}
std::string designer::getName()const
{
	return this->name;
}
int designer::getExperience()const
{
	return this->experience;
}
int designer::getEmpNo()const
{
	return this->empNO;
}
void designer::setField(const std::string field)
{
	this->field=field;
}
std::string designer::getField()const
{
	return this->field;
}
void designer::display()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"Experience = "<<this->experience<<std::endl;
	std::cout<<"Employee Number = "<<this->empNO<<std::endl;
	std::cout<<"Field = "<<this->field<<std::endl;
}
