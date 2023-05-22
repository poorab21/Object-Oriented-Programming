#include<iostream>
#ifndef HUMAN_H
#define HUMAN_H
class human{
	protected:
		std::string firstname;
		std::string lastname;
	public:
		human();
		~human();
		human(const std::string,const std::string);
		void display();
};
#endif
