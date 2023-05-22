#include<iostream>
class info{
	private:
		std::string name;
		std::string address;
	public:
		void display();
		info();
		~info();
		std::string getNAME()const;
		std::string getADDRESS()const;
		void setNAME(const std::string);
		void setADDRESS(const std::string);
};
