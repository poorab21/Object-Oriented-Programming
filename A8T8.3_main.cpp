#include"triangle.h"
int main()
{
	polygon *p=new triangle();
	p->setValues(11,12);
	p->CalculateArea();
	p->ShowAngles(); 
}
