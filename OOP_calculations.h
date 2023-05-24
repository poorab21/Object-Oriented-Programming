#include<iostream>
#ifndef CAlCULATIONS_H
#define CALCULATIONS_H
class calculations{
	protected:
		int x;
		int y;
	public:
		calculations()
		{
			this->x=0;
			this->y=0;
		}
		~calculations()
		{
			this->x=0;
			this->y=0;
		}
		void setData(const int x,const int y)
		{
			this->x=x;
			this->y=y;
		}
		virtual void Calculate()=0;
};
#endif
