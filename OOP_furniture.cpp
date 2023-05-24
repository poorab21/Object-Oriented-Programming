#include"furniture.h"

furniture::furniture()
{
this->built=" ";
this->amount=0;
}
furniture::furniture(const int amount,const std::string built)
{
this->built=built;
this->amount=amount;
ptr=new std::string[amount];
}
int furniture::getAmount()const
{
	return this->amount;
}
std::string furniture::getBuild()const
{
return this->built;
}
int furniture::getFurniture()const
{
return this->amount;
}
furniture::~furniture()
{
this->built=" ";
this->amount=0;
delete []ptr;
}
void furniture::setFurniture()
{
for(int i=0;i<(this->amount);i++)
{
std::cout<<"enter furniture:"<<std::endl;
getline(std::cin,ptr[i]);
}
}
std::string& furniture::operator [](const int n)const
{
return this->ptr[n];
}
