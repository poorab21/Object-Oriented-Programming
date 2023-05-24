#include"inhabitants.h"

inhabitants::inhabitants()
{
	this->number=0;
}
inhabitants::inhabitants(const int number)
{
	this->number=number;
}
inhabitants::~inhabitants()
{
	this->number=0;
}
int inhabitants::getNumber()const
{
	return this->number;
}
