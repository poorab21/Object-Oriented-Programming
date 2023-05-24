#include<iostream>
int main()
{
    int num;
    int num2;
    int remainder;
    int remainder2;
    int i;
    std::cout<<"enter number:"<<std::endl;
    std::cin>>num;
    std::cout<<"enter number:"<<std::endl;
    std::cin>>num2;
    for(i=num;i>0;i--)
    {
        remainder=num%i;
        remainder2=num2%i;
        if(remainder==0 && remainder2==0)
        {
            std::cout<<i<<" is GCD of "<<num<<" and "<<num2<<std::endl;
            break;
        }
    }
}
