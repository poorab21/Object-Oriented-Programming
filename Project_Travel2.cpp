#include"Travel2.h"

int travel::count=0;

int travel::getCount()
{
	return count;
} 
travel::travel()
{
	this->destination=" ";
	this->duration="";
	this->price_range=0.0;
	this->Purpose_Of_Visit="";
	this->class_seating="";
	count++;
}
travel::travel(const std::string destination)
{
	this->destination=destination;
	count++;
}
std::string travel::getDestination()const
{
	return this->destination;
}
std::string travel::getDuration()const
{
	return this->duration;
}
std::string travel::getPurposeOfVisit()const
{
	return this->Purpose_Of_Visit;
}
float travel::getPrice()const
{
	return this->price_range;
}
void travel::setClass(const std::string class_seating)
{
	this->class_seating=class_seating;
}
void travel::setDestination(const std::string destination)
{
	this->destination=destination;
}
void travel::setDuration(const std::string duration)
{
	this->duration=duration;
}
void travel::setPurposeOfVisit(const std::string Purpose_Of_Visit)
{
	this->Purpose_Of_Visit=Purpose_Of_Visit;
}
void travel::setInfo()
{
	std::string reply;
	std::cin.ignore();
	std::cout<<"Enter Destination:"<<std::endl;
	getline(std::cin,this->destination);
	std::cout<<"Is this your first time visiting this country"<<std::endl;
	std::cin>>this->visitStatus;
	std::cout<<"Do you have any relatives or family members residing in "<<this->destination<<std::endl;
	std::cin>>this->RelativeStatus;
	if(this->RelativeStatus=="yes" || this->RelativeStatus=="Yes" || this->RelativeStatus=="YES")
	{
		std::cout<<"Do you plan on staying with them:"<<std::endl;
		std::cin>>reply;
		if(reply=="yes")
		{
			std::cin.ignore();
			std::cout<<"Enter place of residence:"<<std::endl;
			getline(std::cin,this->Residence);
		}
		else if(reply=="no")
		{
			std::cin.ignore();
			std::cout<<"Enter your place of Residence:"<<std::endl;
			getline(std::cin,this->Residence);
		}
	}
	else
	{
		std::cin.ignore();
	std::cout<<"Enter your place of residence in "<<this->destination<<std::endl;
	getline(std::cin,this->Residence);
	}
	std::cout<<"Enter Duration of Stay:"<<std::endl;
	getline(std::cin,this->duration);
	std::cout<<"Enter Purpose Of Visit:"<<std::endl;
	getline(std::cin,this->Purpose_Of_Visit);
	system("cls");
	std::cout<<"\tPersonal Info Sheet"<<std::endl;
	this->setData();
}
void travel::DetermineClass()
{
	std::cout<<"Enter Price Range:"<<std::endl;
	std::cin>>this->price_range;
	if(this->price_range>=5000)
	{
		std::cout<<"you are eligible for first class reservations"<<std::endl;
		std::cout<<"Would You like to book seats for first class:"<<std::endl;
		std::cin>>this->answer;
		if(this->answer=="yes")
		{
			this->setClass("first class");
		}
		else if(this->answer=="no")
		{
			std::cout<<"Would you like to consider alternate seating options:"<<std::endl;
			std::cin>>this->answer2;
			if(this->answer2=="yes")
			{
				std::cout<<"Class Seatings -   Price Range"<<std::endl;
				std::cout<<"business class -   3800 to 5000"<<std::endl;
				std::cout<<"Premium Economy class -   2500 to 3800"<<std::endl;
				std::cout<<"Economy class -   atleast 2500"<<std::endl;
				std::cout<<"What do you consider:"<<std::endl;
				std::cin.ignore();
				getline(std::cin,this->answer3);
				this->setClass(answer3);
			}
			else
			{
				std::cout<<"No more classes Available"<<std::endl;
			}
		}
	}
	else if(this->price_range>=3800 && this->price_range<5000)
	{
		std::cout<<"You are eligible for Business Class reservations"<<std::endl;
		std::cout<<"Would you like to book seats for Business Class:"<<std::endl;
		std::cin>>this->answer;
		if(this->answer=="yes")
		{
			this->class_seating="Business class Seating";
		}
		else if(this->answer=="no")
		{
			std::cout<<"Would you like to consider alternate seating options:"<<std::endl;
			std::cin>>this->answer2;
			if(this->answer2=="yes")
			{
				std::cout<<"Class Seatings -   Price Range"<<std::endl;
				std::cout<<"Premium Economy class -   2500 to 3800"<<std::endl;
				std::cout<<"Economy class -   atleast 2500"<<std::endl;
				std::cout<<"What do you consider:"<<std::endl;
				std::cin.ignore();
				getline(std::cin,this->answer3);
				this->setClass(answer3);
			}
			else 
			{
				std::cout<<"No more classes Available!"<<std::endl;
			}
		}
	}
	else if(this->price_range>=2500 && this->price_range<3800)
	{
		std::cout<<"You are eligible for Premium Economy class reservations:"<<std::endl;
		std::cout<<"would you like to reserve Premium Economy class tickets:"<<std::endl;
		std::cin>>this->answer;
		if(this->answer=="yes")
		{
			this->class_seating="Premium class Seating";
		}
		else if(this->answer=="no")
		{
			std::cout<<"Would you like to consider alternate seating options:"<<std::endl;
			std::cin>>this->answer2;
			if(this->answer2=="yes")
			{
				std::cout<<"The only remaining class under your price range is"<<std::endl;
				std::cout<<"Economy class -   atleast 2500"<<std::endl;
				std::cout<<"Do you take it:"<<std::endl;
				std::cin>>this->answer3;
				if(this->answer3=="no")
				{
					std::cout<<"No more available Classes"<<std::endl;
				}
				else
				{
					this->setClass("economy class");
				}
			}
		}
	}
	else if(this->price_range<2500)
	{
		std::cout<<"You only get Economy class seatings for your stated price range"<<std::endl;
		std::cout<<"Do you take it:"<<std::endl;
		std::cin>>this->answer;
		if(this->answer=="yes")
		{
			this->class_seating="Economy class";
		}
		else
		{
			std::cout<<"No other class Available under your price range"<<std::endl;
		}
	}
}
std::string travel::getClass()const
{
	return this->class_seating;
}
std::ostream& operator <<(std::ostream& out,const travel& t)
{
	std::cout<<"Destination = "<<t.destination<<std::endl;
	std::cout<<"Price Range = "<<t.price_range<<std::endl;
	std::cout<<"Class Seating = "<<t.class_seating<<std::endl;
	std::cout<<"Duration of Stay = "<<t.duration<<std::endl;
	std::cout<<"Residence of Stay = "<<t.Residence<<std::endl;
	std::cout<<"Purpose Of Visit = "<<t.Purpose_Of_Visit<<std::endl;
	return out;
}
void travel::PaymentMethod()
{
	//system("cls");
	int reply;
	std::cout<<"Select Payment Method"<<std::endl;
	std::cout<<"1. Credit Card"<<std::endl;
	std::cout<<"2.Direct Account Payment"<<std::endl;
	std::cout<<"Enter Your Preferred Method of Payment"<<std::endl;
	std::cin>>this->reply;
	if(this->reply==1)
	{
		std::cout<<"Credit Card Details Will Be Required"<<std::endl;
		std::cout<<"Enter Credit Card Number:"<<std::endl;
		std::cin>>this->credit_card_number;
		std::cout<<"Enter Zip Code:"<<std::endl;
		std::cin>>this->zip_code;
		std::cout<<"Enter Balance:"<<std::endl;
		std::cin>>this->Credit_Amount;
		this->Credit_Amount-=this->price_range;
		std::cout<<"After Deduction "<<std::endl;
		std::cout<<"Credit Amount = "<<this->Credit_Amount<<std::endl;
	}
	else if(this->reply==2)
	{
		std::cout<<"Account Details Will be Required"<<std::endl;
		std::cout<<"Enter Account Number:"<<std::endl;
		std::cin>>this->Account_Number;
		std::cout<<"Enter Balance:"<<std::endl;
		std::cin>>this->balance;
		this->balance-=this->price_range;
		std::cout<<"After Deduction "<<std::endl;
		std::cout<<"Balance = "<<this->balance<<std::endl;
	}
}
void travel::Display()
{
	std::cout<<"\tPersonal Info Sheet"<<std::endl;
	this->ShowData();
	std::cout<<std::endl;
	std::cout<<"\tTravel Info"<<std::endl;
	std::cout<<"Destination = "<<this->destination<<std::endl;
	std::cout<<"Price Range = "<<this->price_range<<std::endl;
	std::cout<<"Class Seating = "<<this->class_seating<<std::endl;
	std::cout<<"Duration of Stay = "<<this->duration<<std::endl;
	std::cout<<"Residence of Stay = "<<this->Residence<<std::endl;
	std::cout<<"Purpose Of Visit = "<<this->Purpose_Of_Visit<<std::endl;
	std::cout<<std::endl;
}
void travel::AdditionalInfo()
{
	if(this->reply==1)
	{
	std::cout<<"Credit Card Number = "<<this->credit_card_number<<std::endl;
	std::cout<<"Zip Code = "<<this->zip_code<<std::endl;
	std::cout<<"Credit Card Amount = "<<this->Credit_Amount<<std::endl;
	}
	else if(this->reply==2)
	{
		std::cout<<"Account Number = "<<this->Account_Number<<std::endl;
		std::cout<<"Account Balance = "<<this->balance<<std::endl;
	}
}
travel::~travel()
{
	this->destination=" ";
	this->duration="";
	this->price_range=0.0;
	this->Purpose_Of_Visit="";
	this->class_seating="";
	count--;	
}
