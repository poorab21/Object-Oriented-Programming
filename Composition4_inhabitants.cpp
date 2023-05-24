#include"inhabitants.h"

inhabitants::inhabitants()
{
	this->permit=0;
}
inhabitants::~inhabitants()
{
	this->permit=0;
	delete []name;
}
int inhabitants::getPermit()const
{
	return permit;
}
std::string& inhabitants::operator [](const int permit)
{
	if(this->permit==0)
	{
		this->permit=permit;
		name=new std::string[permit];
	}
	return name[permit];
}
 
