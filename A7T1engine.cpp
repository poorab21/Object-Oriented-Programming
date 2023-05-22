#include"engine.h"

engine::engine()
{
	this->ModelNumber=" ";
}
engine::engine(const std::string ModelNumber)
{
	this->ModelNumber=ModelNumber;
}
engine::~engine()
{
	this->ModelNumber=" ";
}
void engine::start()
{
	std::cout<<"Engine Started"<<std::endl;
}
void engine::stop()
{
	std::cout<<"Engine Stopped"<<std::endl;
}
std::string engine::getModelNumber()const
{
	return this->ModelNumber;
}
