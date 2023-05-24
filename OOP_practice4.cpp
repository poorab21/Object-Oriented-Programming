#include<iostream>
#include<conio.h>
class border{
	private:
		int x;
		int y;
	public:
		border()
		{
			x=0;
			y=0;
		}
		border(const int x,const int y)
		{
			this->x=x;
			this->y=y;
		}
		int getx()const
		{
			return x;
		}
		int gety()const
		{
			return y;
		}
		void setx(const int x)
		{
			this->x=x;
		}
		void sety(const int y)
		{
			this->y=y;
		}
		void getcoordinates()
		{
			std::cout<<"("<<this->x<<","<<this->y<<")"<<std::endl;
		}
		void create()
		{
			for(int i=0;i<=y;i++)
			{
				for(int j=0;j<=x;j++)
				{
				   if(i>0 && i<y)
				   {
				   	if(j==0 || j==x)
				   	{
				   		std::cout<<"*";
					}
                                       else
                                       {
                                           std::cout<<" ";
                                       }
				   }
				   else if(i==0 || i==y)
				   {
				   	std::cout<<"*";
				   }
				}
                     std::cout<<std::endl;
			}
		}
		friend class target;
};

class target{
	private:
		int x;
		int y;
	public:
		target()
		{
			x=0;
			y=0;
		}
		target(const int x,const int y)
		{
			this->x=x;
			this->y=y;
		}
		void setx(const int x)
		{
			this->x=x;
		}
		void sety(const int y)
		{
			this->y=y;
		}
		int getx()const
		{
			return x;
		}
		int gety()const
		{
			return y;
		}
		void myfriend(border b)
		{
			if(x<b.x && y<b.y)
			{
				gotoxy(this->x,this->y);
				std::cout<<"*";
			}
			else 
			{
				std::cout<<"Coordinates exceed limit"<<std::endl;
			}
		}
		void getcoordinates()
		{
			std::cout<<"("<<this->x<<","<<this->y<<")";
		}
};


int main()
{
	
}









































