#include<iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H
class customer{
	private:
	   std::string name;
	   bool member;
	   std::string memberType;
	public:
		customer();
	   customer(const std::string);
	   void setName(const std::string);
	   void setMember(const bool);
	   void setMemberType(const std::string);
	   std::string getName()const;
           std::string getMemberType()const;
	   bool isMember()const;
};
#endif
