#include"department.h"
int main()
{
	employee e;
	e.setID(112);
	e.setName("mr singh");
	e.setSalary(1200.21);
	department d(1,"Computer Science",&e);
	department d2(3,"Electrical Engineering",&e);
	d.view();
	d2.view();
}
