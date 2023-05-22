#include<iostream>
class calculator{
	private:
		float x;
		float y;
	public:
		void sum();
		void product();
		void division();
		void subtraction();
		calculator(float,float);
		~calculator();
};
