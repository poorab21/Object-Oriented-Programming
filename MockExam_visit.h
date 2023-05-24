#include"customer.h"
#ifndef VISIT_H
#define VISIT_H
class visit{
	private:
	   customer c1;
	   std::string date;
	   double discount;
	   double charges;
	   double deliverycharges;
	public:
	   visit(std::string,std::string,const customer,const double);
	   ~visit();
           std::string getName()const;
	   void displayInfo();
	   double getCharges()const;
	   void setCharges(const double);
	   void CalculateCharges();
           double getDeliveryCharges()const;
	   void setDeliveryCharges(const double);
};
#endif
