#include<iostream>
class point{
	private:
		int x;
		int y;
		bool answer;
	public:
		point();
		point(const int,const int);
		int getX()const;
		int getY()const;
		bool operator <(point&);
		friend bool operator >=(point&,point&);
};
