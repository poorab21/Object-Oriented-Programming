#include"Travel.h"

info::info()
{
	this->name=" ";
	this->age=0;
	this->place_of_residence=" ";
}
info::info(const std::string name,const int age)
{
	this->name=name;
	this->age=age;
}
std::istream& operator >>(std::istream& in,info& i)
{
	std::cout<<"Required Additional Information"<<std::endl;
	std::cout<<std::endl<<std::endl;
	std::cout<<"Enter Gender:"<<std::endl;
	getline(std::cin,i.gender);
	std::cout<<"Enter Current Place of Residence:"<<std::endl;
	getline(std::cin,i.place_of_residence);
	std::cout<<"Enter Mobile Number:"<<std::endl;
	getline(std::cin,i.mobile_number);
	std::cout<<"Enter Email Address:"<<std::endl;
	getline(std::cin,i.email_address);
	return in;
}
void info::setData()
{
	std::cout<<"Enter Gender:"<<std::endl;
	std::cin>>this->gender;
	std::cin.ignore();
	std::cout<<"Enter Name:"<<std::endl;
	getline(std::cin,this->name);
	std::cin.ignore();
	std::cout<<"Enter Current Place of Residence:"<<std::endl;
	getline(std::cin,this->place_of_residence);
	std::cout<<"Enter Mobile Number:"<<std::endl;
	getline(std::cin,this->mobile_number);
	std::cin.ignore();
	std::cout<<"Enter Email Address:"<<std::endl;
	getline(std::cin,this->email_address);
}
void info::ShowData()
{
	std::cout<<"Name = "<<this->name<<std::endl;
	std::cout<<"Gender = "<<this->gender<<std::endl;
	std::cout<<"Age = "<<this->age<<std::endl;
	std::cout<<"Current Place of Residence = "<<this->place_of_residence<<std::endl;
	std::cout<<"Mobile Number = "<<this->mobile_number<<std::endl;
	std::cout<<"Email Address = "<<this->email_address<<std::endl;
}
std::ostream& operator <<(std::ostream& out,const info& i)
{
	std::cout<<"Complete Personal Info"<<std::endl;
	std::cout<<std::endl;
	std::cout<<"Name = "<<i.name<<std::endl;
	std::cout<<"Age = "<<i.age<<std::endl;
	std::cout<<"Gender = "<<i.gender<<std::endl;
	std::cout<<"Current Place Of Residence = "<<i.place_of_residence<<std::endl;
	std::cout<<"Mobile Number = "<<i.mobile_number<<std::endl;
	std::cout<<"Email Address = "<<i.email_address<<std::endl;
	return out;
}
void info::InfoVerify()
{
	int count=0;
	int count2=0;
	int count3=0;
	int count4=0;
	if(this->mobile_number.length()<11 || this->mobile_number.length()>11)
	{
		std::cout<<"The Entered Mobile Number is Invalid"<<std::endl;
		std::cout<<"Please Re-enter Mobile Number:"<<std::endl;
		std::cin>>this->mobile_number;
	}
	else
	{
		count++;
	}
	for(int i=0;i<this->name.length();i++)
	{
		if(this->name.compare(i,1," ")==0)
		{
			count2++;
		}
	}
	if(count2>0)
	{
		count++;
	}
	else if(count2==0)
	{
		std::cout<<"Error! Name must include surname "<<std::endl;
		std::cout<<"Re-enter Name:"<<std::endl;
		std::cin.ignore();
		getline(std::cin,this->name);
	}
	for(int i=0;i<this->email_address.length();i++)
	{
	if(this->email_address.compare(i,1,"@")==0)
	{
		count3++;
	}
	else if(this->email_address.compare(i,1,".")==0)
	{
		count4++;
	}
	}
	if(count3>0 && count4>0)
	{
		count++;
	}
	else
	{
		std::cout<<"Email Address is Invalid"<<std::endl;
		std::cout<<"Re-enter Email Address:"<<std::endl;
		std::cin>>this->email_address;
	}
	if(count==3)
	{
		std::cout<<"Complete Info is Valid"<<std::endl;
	}
}
void info::setAge(const int age)
{
	this->age=age;
}
void info::setEmail(const std::string email_address)
{
	this->email_address=email_address;
}
void info::setGender(const std::string gender)
{
	this->gender=gender;
}
void info::setMobileNumber(const std::string mobile_number)
{
	this->mobile_number=mobile_number;
}
void info::setName(const std::string name)
{
	this->name=name;
}
void info::setPlace(const std::string place_of_residence)
{
	this->place_of_residence=place_of_residence;
}
int info::getAge()const
{
	return this->age;
}
std::string info::getGender()const
{
	return this->gender;
}
std::string info::getName()const
{
	return this->name;
}
std::string info::getNumber()const
{
	return this->mobile_number;
}
std::string info::getEmail()const
{
	return this->email_address;
}
std::string info::getPlace()const
{
	return this->place_of_residence;
}
void info::operator ()(const std::string target,const std::string replace)
{
	std::string arr[10]={"0","1","2","3","4","5","6","7","8","9"};
    int number2=0;
	if(target=="mobile number")
	{
		this->mobile_number=replace;
	}
	else if(target=="name")
	{
		this->name=replace;
	}
	else if(target=="gender")
	{
		this->gender=replace;
	}	
	else if(target=="email address")
	{
		this->email_address=replace;
	}
	else if(target=="place of residence")
	{
		this->place_of_residence=replace;
	}
	else if(target=="age")
	{
		for(int i=0;i<replace.length();i++)
		{
			for(int j=0;j<10;j++)
			{
				if(replace.compare(i,1,arr[j])==0)
				{
					number2=(number2*10)+j;
				}
			}
		}
		this->age=number2;
	}
}
info::~info()
{
	this->age=0;
	this->email_address=" ";
	this->gender=" ";
	this->mobile_number=" ";
	this->name=" ";
	this->place_of_residence=" ";
}
info& info::operator =(const info& i)
{
	this->age=i.age;
	this->email_address=i.email_address;
	this->gender=i.gender;
	this->mobile_number=i.mobile_number;
	this->name=i.name;
	this->place_of_residence=i.place_of_residence;
	return (*this);
}
