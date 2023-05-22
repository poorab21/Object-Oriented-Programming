#include"polygon.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H
class triangle:public polygon{
	public:
		triangle();
		~triangle();
		void CalculateArea();
		void ShowAngles();
};
#endif
