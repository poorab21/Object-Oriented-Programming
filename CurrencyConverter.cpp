#include<iostream>
#include"CurrencyConverter.h"

CurrencyConverter::CurrencyConverter()
{
currency=0;
converted_currency=0;
}
CurrencyConverter::CurrencyConverter(const float currency)
{
this->currency=currency;
}
CurrencyConverter::~CurrencyConverter()
{
currency=0;
converted_currency=0;
}
void CurrencyConverter::PKR_to_USD(const float currency)
{
this->converted_currency=(currency)*(0.0060);
std::cout<<currency<<" Rupees To Dollars = "<<(converted_currency)<<std::endl;
}
void CurrencyConverter::PKR_to_EURO(const float currency)
{
this->converted_currency=currency*0.0055;
std::cout<<currency<<" Rupees To Euro = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::PKR_to_POUND(const float currency)
{
this->converted_currency=currency*0.0049;
std::cout<<currency<<" Rupees To Pounds = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::USD_to_PKR(const float currency)
{
this->converted_currency=currency*166.53;
std::cout<<currency<<" Dollars To Rupees = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::EURO_to_PKR(const float currency)
{
this->converted_currency=currency*179.94;
std::cout<<currency<<" Euros To Rupees = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::POUND_to_USD(const float currency)
{
this->converted_currency=currency*1.23;
std::cout<<currency<<" POUND To Dollars = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::EURO_to_POUND(const float currency)
{
this->converted_currency=currency*0.88;
std::cout<<currency<<" Euros To Pounds = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::POUND_to_EURO(const float currency)
{
this->converted_currency=currency*1.14;
std::cout<<currency<<" Pounds To Euros = "<<this->converted_currency<<std::endl;
}
void CurrencyConverter::Selection()
{
int select;
std::cout<<"Select From the Following"<<std::endl;
std::cout<<"1.PKR TO USD"<<std::endl;
std::cout<<"2.PKR TO EURO"<<std::endl;
std::cout<<"3.PKR TO POUND"<<std::endl;
std::cout<<"4.USD TO PKR"<<std::endl;
std::cout<<"5.EURO TO PKR"<<std::endl;
std::cout<<"6.POUND TO USD"<<std::endl;
std::cout<<"7.EURO TO POUND"<<std::endl;
std::cout<<"8.POUND TO EURO"<<std::endl;
std::cin>>select;
switch(select)
{
case 1:PKR_to_USD(this->currency);
       break;
case 2:PKR_to_EURO(this->currency);
       break;
case 3:PKR_to_POUND(this->currency);
       break;
case 4:USD_to_PKR(this->currency);
       break;
case 5:EURO_to_PKR(this->currency);
       break;
case 6:POUND_to_USD(this->currency);
       break;
case 7:EURO_to_POUND(this->currency);
       break;
case 8:POUND_to_EURO(this->currency);
       break;
}
}
