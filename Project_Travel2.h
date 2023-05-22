#include"Travel.h"
#ifndef TRAVEL2_H
#define TRAVEL2_H
class travel:public info{
	private:
		std::string destination;
		static int count;
		float price_range;
		std::string class_seating;
		std::string answer;
		std::string answer2;
		std::string answer3;
		std::string duration;
		std::string visitStatus;
		std::string RelativeStatus;
		std::string Residence;
		int credit_card_number;
		int zip_code;
		double Credit_Amount;
		std::string Purpose_Of_Visit;
		int Account_Number;
		double balance;
		int reply;
	public:
		travel();
		travel(const std::string);
		~travel();
		static int getCount();
		void setInfo();
		std::string getClass()const;
		std::string getDestination()const;
		std::string getDuration()const;
		std::string getPurposeOfVisit()const;
		float getPrice()const;
		void setClass(const std::string);
		void setDestination(const std::string);
		void setDuration(const std::string);
		void setPurposeOfVisit(const std::string);
		void PaymentMethod();		
		void DetermineClass();
		void Display();
		void AdditionalInfo();
		friend std::ostream& operator <<(std::ostream&,const travel&);
};
#endif
