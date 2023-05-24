#include<iostream>
int main()
{
    int number;
    int remainder;
    int i;
    std::cout<<"enter number:"<<std::endl;
    std::cin>>number;
    for(i=1;i<number;i++)
    {
        remainder=number%i;
        if(remainder==0)
        {
            std::cout<<i<<std::endl;
        }
    }
}
