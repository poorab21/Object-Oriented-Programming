#include"designer.h"
#include"programmer.h"
int main()
{
	designer d;
	d.setEmpNo(21);
	d.setExperience(2);
	d.setName("mr johnny singh");
	d.setField("Computer Science");
	d.display();
	std::cout<<std::endl;
	programmer p;
	p.setEmpNo(12);
	p.setExperience(22);
	p.setName("henry");
	p.setLanguages("java programming");
	p.display();
}
