#ifndef ROOM_H
#define ROOM_H
#include"furniture.h"
#include<iostream>
class room{
	private:
	std::string sqfeet;
	std::string occupants;
	furniture f;
	public:
	room();
	room(const furniture&,const std::string sqfeet,const std::string occupants);
	~room();
	friend std::ostream& operator <<(std::ostream&,const furniture&);
	void display();
};
#endif
	
