#include"calculations.h"
#ifndef PRODUCT_H
#define PRODUCT_H
class product:public calculations{
	private:
		int x;
		int y;
	public:
		product()
		{
			this->x=0;
			this->y=0;
		}
		~product()
		{
			this->x=0;
			this->y=0;
		}
		void setData(const int x,const int y)
		{
			this->x=x;
			this->y=y;
		}
		void Calculate()
		{
			std::cout<<"Product = "<<(this->x)*(this->y)<<std::endl;
		}
};
#endif
