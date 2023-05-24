#include"visit.h"
#include"discount.h"
visit::visit(std::string name,std::string date,customer c1,const double discount)
{
c1.setName(name);
this->date=date;
this->c1=c1;
this->discount=discount;
}
visit::~visit()
{
this->date="";
this->charges=0.0;
this->deliverycharges=0.0;
}
std::string visit::getName()const
{
return this->c1.getName();
}
void visit::displayInfo()
{
std::cout<<"Name = "<<this->getName()<<std::endl;
std::cout<<"Date = "<<this->date<<std::endl;
std::cout<<"Charges = "<<this->charges<<std::endl;
std::cout<<"Delivery Charges = "<<this->deliverycharges<<std::endl;
}
void visit::setCharges(const double charges)
{
this->charges=charges;
}
double visit::getCharges()const
{
return this->charges;
}
double visit::getDeliveryCharges()const
{
return this->deliverycharges;
}
void visit::setDeliveryCharges(const double delivercharges)
{
this->deliverycharges=deliverycharges;
}
void visit::CalculateCharges()
{
   double sub=(this->charges)*(this->discount);  
    this->charges-=sub;
std::cout<<"Charges = "<<this->charges<<std::endl;
}