#include<iostream>
#include<conio.h>
#include<stdlib.h>
class border{
	private:
		int x;
		int y;
		int t1;
		int t2;
		int s1;
		int s2;
	public:
		border()
		{
			x=0;
			y=0;
		}
		void settarget(const int t1,const int t2)
		{
		    this->t1=t1;
		    this->t2=t2;
		}
		void setsnake(const int s1,const int s2)
		{
			this->s1=s1;
			this->s2=s2;
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
                    if(j==this->t1 && i==this->t2)
                    {
                        std::cout<<"*";
                    }
                    if(j==this->s1 && i==this->s2)
                    {
                    	std::cout<<"0";
					}
					if(this->s1==0 || this->s1==x || this->s2==0 || this->s2==y)
					{
						exit(1);
					}
					if(this->s1==this->t1 && this->s2==this->t2)
					{
						this->t1=rand()%(x+1);
						this->t2=rand()%(y+1);
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
		friend class snake;
		friend class direction;
};

class target:public border{
	private:
		int x;
		int y;
	public:
		target()
		{
			x=0;
			y=0;
		}
		int getx()const
		{
			return x;
		}
		int gety()const
		{
			return y;
		}
		void myfriend(border& b)
		{
		    static int increase;
		    srand(increase);
		    this->x=rand()%b.x;
		    this->y=rand()%b.y;
			if(this->x<b.x && this->y<b.y)
			{
			    b.settarget(this->x,this->y);
			}
           increase++;
		}
		void getcoordinates()
		{
			std::cout<<"("<<this->x<<","<<this->y<<")";
		}
		friend class border;
};
class snake:public border{
	private:
		int a;
		int b;
	public:
		snake()
		{
			this->a=0;
			this->b=0;
		}
		void place(border& b)
		{
			this->a=rand()%b.x;
			this->b=rand()%b.y;
			if((this->a)<b.x && (this->b)<b.y)
			{
				b.setsnake(this->a,this->b);
			}
		}
};
class direction:public border{
	private:
		char dir;
	public:
		void move()
		{
			this->dir=getch();
		}
		void movement(border& bor)
		{
			switch(this->dir)
			{
				case 'r':bor.s1++;
				         break;
				case 'l':bor.s1--;
				         break;
				case 'u':bor.s2--;
				         break;
				case 'd':bor.s2++;
				         break;
			}
			bor.create();
		}
};
int main()
{
	system("color A4");
   border b(75,15);
   b.create();
   target t;
   snake s;
   t.myfriend(b);
   s.place(b);
   direction d1;
   do
   {
   if(kbhit())
   {
   d1.move();	
   }
   d1.movement(b);
   system("cls");
}
while(1);
}
