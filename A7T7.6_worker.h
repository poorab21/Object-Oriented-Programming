#include"human.h"
#ifndef WORKER_H
#define WORKER_H
class worker:protected human{
			private:
				float weekSalary;
				int work_hours_per_day;
			public:
				worker();
				~worker();
				worker(const float,const int);
				void setWeekSalary(const float);
				void setWorkHours(const int);
				float getWeekSalary()const;
				int getWorkHours()const;
				float MoneyPerHour();
				void display();
				void setFirstName(const std::string);
				void setLastName(const std::string);
				std::string getFirstName()const;
				std::string getLastName()const;
};
#endif
