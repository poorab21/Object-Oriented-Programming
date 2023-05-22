#include"shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class circle:public shape{
	protected:
		double radius;
	public:
		circle();
		~circle();
		circle(const double,const std::string,const bool);
		double getRadius()const;
		void setRadius(const double);
		double CalculateArea();
		double CalculatePerimeter();
};
#endif
