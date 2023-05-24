#include<iostream>
#ifndef AUTHOR_H
#define AUTHOR_H
class author{
	private:
	    std::string name;
	    std::string email;
	    std::string gender;
	    std::string *books_name;
	    int size;
	public:
	    author();
	    int getSize()const;
	    author(const std::string,const std::string,const std::string);
	    ~author();
	    std::string& operator [](const int);
	    author& operator =(const author&);
};
#endif
