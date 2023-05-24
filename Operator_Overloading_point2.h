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
		std::string operator <(point&);
		friend std::string operator >=(point&,point&);
};
