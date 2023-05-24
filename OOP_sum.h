#include"calculations.h"
#ifndef SUM_H
#define SUM_H
class sum:public calculations{
	private:
		int x;
		int y;
	public:
		sum()
		{
			this->x=0;
			this->y=0;
		}
		~sum()
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
			std::cout<<"Sum = "<<(this->x)+(this->y)<<std::endl;
		}
};
#endif
