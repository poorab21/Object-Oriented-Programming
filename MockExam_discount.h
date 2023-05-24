#include<iostream>
#ifndef DISCOUNT_H
#define DISCOUNT_H
class discount{
	 private:
             double discountpremium=0.2;
             double discountgold=0.15;
	     double discountsilver=0.1;
	     double productdiscountpremium=0.1;
             double productdiscountgold=0.1;
             double productdiscountsilver=0.1;
	public:
		discount();
            double getDiscountPremium()const;
	    double getDiscountgold()const;
	    double getDiscountsilver()const;
	    double getproductdiscountpremium()const;
            double getproductdiscountgold()const;
            double getproductdiscountsilver()const;
};
#endif
