#include<iostream>
int main()
{
    int x;
    int y;
    std::cout<<"enter value of x:"<<std::endl;
    std::cin>>x;
    std::cout<<"enter value of y:"<<std::endl;
    std::cin>>y;
    if(x==0 && y==0)
    {
        std::cout<<"x-axis and y-axis"<<std::endl;
    }
    else if (x>0 && y>0)
    {
        std::cout<<"first quadrant"<<std::endl;
    }
    else if (x<0 && y>0)
    {
        std::cout<<"second quadrant"<<std::endl;
    }
    else if (x<0 && y<0)
    {
        std::cout<<"third quadrant"<<std::endl;
    }
    else if (x>0 && y<0)
    {
        std::cout<<"fourth quadrant"<<std::endl;
    }
    else if (x==0 && y>0 || x==0 && y<0)
    {
        std::cout<<"y-axis"<<std::endl;
    }
    else if (x>0 && y==0 || x<0 && y==0)
    {
        std::cout<<"x-axis"<<std::endl;
    }
}
