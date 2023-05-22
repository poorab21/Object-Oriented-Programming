#include"engine.h"
#ifndef CAR_H
#define CAR_H
class car{
	private:
		int year;
		std::string model;
		std::string color;
		float price;
		engine e;
	public:
		car();
		car(const int,const std::string,const float price,const std::string,engine);
		~car();
		void displayInfo();
		void start();
		void stop();
};
#endif
