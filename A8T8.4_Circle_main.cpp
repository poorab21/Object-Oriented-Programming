#include"rectangle.h"
#include"circle.h"
int main()
{
	shape *s=new circle(15,"green",true);
	std::cout<<s->CalculateArea()<<std::endl;
	std::cout<<s->CalculatePerimeter()<<std::endl;
	std::cout<<std::endl;
	shape *s1=new rectangle(200,200,"red",false);
	std::cout<<s1->CalculateArea()<<std::endl;
	std::cout<<s1->CalculatePerimeter()<<std::endl;
}
