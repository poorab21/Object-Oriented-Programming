#include<iostream>
#ifndef TRAVEL_H
#define TRAVEL_H
class info{
	private:
		std::string name;
		std::string mobile_number;
		std::string place_of_residence;
		std::string email_address;
		int age;
		std::string gender;
	public:
		info();
		~info();
		info& operator =(const info&);
		info(const std::string,const int);
		void InfoVerify();
		void setName(const std::string);
		void setMobileNumber(const std::string);
		void setEmail(const std::string);
		void setAge(const int);
		void setGender(const std::string);
		void setPlace(const std::string);
		int getAge()const;
		std::string getName()const;
		std::string getNumber()const;
		std::string getPlace()const;
		std::string getEmail()const;
		std::string getGender()const;
		void setData();
		void ShowData();
		void operator ()(const std::string,const std::string);
		friend std::ostream& operator <<(std::ostream&,const info&);
		friend std::istream& operator >>(std::istream&,info&);
};
#endif
