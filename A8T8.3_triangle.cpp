#include"triangle.h"

triangle::triangle(){};
triangle::~triangle(){};
void triangle::CalculateArea()
{
	int sub;
	sub=width*height;
	std::cout<<"Area = "<<sub/2<<std::endl;
}
void triangle::ShowAngles()
{
	float angle1;
	float angle2;
	float angle3;
	float sum;
	std::cout<<"Enter Value of First Angle:"<<std::endl;
	std::cin>>angle1;
	std::cout<<"Enter Value of Second Angle:"<<std::endl;
	std::cin>>angle2;
	sum=angle1+angle2;
	angle3=180-sum;
	std::cout<<"Angle 1 = "<<angle1<<std::endl;
	std::cout<<"Angle 2 = "<<angle2<<std::endl;
	std::cout<<"Angle 3 = "<<angle3<<std::endl;
}
