#include<iostream>
#include<stdlib.h>
#ifndef GUESS_H
#define GUESS_H
class guess{
	private:
		char word1[5]={'t','i','g','e','r'};
		char random[15]={'a','g','z','d','c','t','i','r','e','f','k','s','x','p','q'};
		char guess_word[5]={' ',' ',' ',' ',' '};
		int guess_count;
		int help_count;
		char answer;
		bool decide;
		int help_number;
	public:
		guess();
		void draw();
		void select();
		void Verify();
		void help_end();
		void guess_end();
		void help();
		void run();
};
#endif
