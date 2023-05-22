#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H
class shape{
	protected:
		std::string color;
		bool filled;
	public:
		shape();
		virtual ~shape();
		shape(const std::string,const bool);
		std::string getColor()const;
		void setColor(const std::string);
		bool isFilled();
		void setFill(const bool);
		virtual double CalculateArea()=0;
		virtual double CalculatePerimeter()=0;
};
#endif
