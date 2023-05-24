#include"author.h"

author::author()
{
this->name=" ";
this->gender=" ";
this->email=" ";
this->size=0;
}
author::author(const std::string name,const std::string gender,const std::string email)
{
this->name=name;
this->gender=gender;
this->email=email;
this->size=0;
}
int author::getSize()const
{
	return this->size;
}
std::string& author::operator [](const int n)
{
if(this->size==0)
{
this->size=n;
books_name=new std::string[n];
}
return this->books_name[n];
}
author::~author()
{
this->name=" ";
this->gender=" ";
this->email=" ";
delete []books_name;
}
author& author::operator =(const author& a)
{
this->name=a.name;
this->email=a.email;
this->gender=a.gender;
this->size=a.size;
this->books_name=a.books_name;
for(int i=0;i<a.size;i++)
{
this->books_name[i]=a.books_name[i];
}
return (*this);
}
