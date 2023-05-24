#include<iostream>
#ifndef PASSENGER_H
#define PASSENGER_H
class passenger{
	private:
	    std::string name;
	    std::string cnic;
	public:
	   passenger();
	   passenger(const std::string,const std::string);
	   ~passenger();
	   std::string getName()const;
};
#endif
