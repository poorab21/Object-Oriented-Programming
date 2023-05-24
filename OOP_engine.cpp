#include"engine.h"

engine::engine()
{
	this->HorsePower=0;
}
engine::engine(const int HorsePower)
{
	this->HorsePower=HorsePower;
}
engine::~engine()
{
	this->HorsePower=0;
}
int engine::getHP()const
{
	return this->HorsePower;
}
