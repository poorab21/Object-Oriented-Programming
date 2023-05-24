#include"room.h"

room::room()
{
this->sqfeet=" ";
this->occupants=" ";
}
room::room(const furniture& f,const std::string sqfeet,const std::string occupants)
{
this->sqfeet=sqfeet;
this->occupants=occupants;
this->f=f;
}
room::~room()
{
this->sqfeet=" ";
this->occupants=" ";
}
std::ostream& operator <<(std::ostream& out,furniture& f1)
{
int i=0;
std::cout<<"Number of Furniture = "<<f1.getFurniture()<<std::endl;
std::cout<<"Built From = "<<f1.getBuild()<<std::endl;
do
{
std::cout<<f1[i]<<std::endl;
i++;
}
while(i<f1.getAmount());
return out;
}
void room::display()
{
std::cout<<"Square Feet = "<<this->sqfeet<<std::endl;
std::cout<<"Number of Occupants = "<<this->occupants<<std::endl;
std::cout<<"Furniture = "<<std::endl;
std::cout<<this->f;
}
