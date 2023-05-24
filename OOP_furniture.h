#ifndef FURNITURE_H
#define FURNITURE_H
#include<iostream>
class furniture{
	private:
	    int amount;
	    std::string built;
	    std::string *ptr;
	public:
	   furniture();
	   furniture(const int amount,const std::string);
	   ~furniture();
	   void setFurniture();
	   std::string& operator [](const int)const;
	   std::string getBuild()const;
	   int getFurniture()const;
	   int getAmount()const;
};
#endif
