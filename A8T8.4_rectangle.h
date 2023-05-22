#include"shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class rectangle:public shape{
	protected:
		double width;
		double length;
	public:
		rectangle();
		~rectangle();
		rectangle(const double,const double,const std::string,const bool);
		double getWidth()const;
		double getLength()const;
		void setWidth(const double);
		void setLength(const double);
		double CalculateArea();
		double CalculatePerimeter();
};
#endif
