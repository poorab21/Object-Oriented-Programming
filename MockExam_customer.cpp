#include"customer.h"

customer::customer(const std::string name)
{
this->name=name;
}
customer::customer()
{
this->name="";
this->member=false;
this->memberType=memberType;
}
void customer::setName(const std::string name)
{
this->name=name;
}
void customer::setMember(const bool member)
{
this->member=member;
}
void customer::setMemberType(const std::string memberType)
{
this->memberType=memberType;
}
bool customer::isMember()const
{
return this->member;
}
std::string customer::getName()const
{
return this->name;
}
std::string customer::getMemberType()const
{
return this->memberType;
}