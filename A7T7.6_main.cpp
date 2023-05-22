#include"student.h"
#include"worker.h"
int main()
{
	worker w(7500,10);
	w.setFirstName("jerry");
	w.setLastName("seinfeld");
	w.setWeekSalary(1200);
	w.setWorkHours(21);
	std::cout<<w.MoneyPerHour()<<std::endl;
	w.display();
	std::cout<<std::endl;
	
	student s1("QU123");
	s1.setEnrollmentNumber("IA88");
	s1.setFirstName("john");
	s1.setLastName("holland");
	s1.display();
}
