#include<iostream>
#ifndef ENGINE_H
#define ENGINE_H
class engine{
	private:
		std::string ModelNumber;
	public:
		engine();
		engine(const std::string);
		~engine();
		std::string getModelNumber()const;
		void start();
		void stop();
};
#endif
