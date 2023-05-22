#include<iostream>
#ifndef POLYGON_H
#define POLYGON_H
class polygon{
	protected:
		int width;
		int height;
	public:
		polygon();
		virtual ~polygon();
		void setValues(const int,const int);
		virtual void CalculateArea()=0;
		virtual void ShowAngles()=0;
};
#endif
