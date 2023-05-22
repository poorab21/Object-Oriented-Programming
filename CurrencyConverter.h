#include<iostream>

class CurrencyConverter{
	private:
		long unsigned currency;
		long unsigned converted_currency;
	public:
		CurrencyConverter();
		CurrencyConverter(const float);
		~CurrencyConverter();
		void PKR_to_USD(const float);
                void PKR_to_EURO(const float);
                void PKR_to_POUND(const float);
                void USD_to_PKR(const float);
                void EURO_to_PKR(const float);
                void POUND_to_USD(const float);
                void EURO_to_POUND(const float);
                void POUND_to_EURO(const float);
                void Selection();
};
