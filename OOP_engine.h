#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
class engine{
	private:
		int HorsePower;
	public:
		engine();
		engine(const int);
		~engine();
		int getHP()const;
};
#endif
