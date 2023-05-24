#include<iostream>
int main()
{
    int number;
    float product;
    int i;
    float divide;
    float sum=0;
    std::cout<<"enter number:"<<std::endl;
    std::cin>>number;
    for(i=1;i<=number;i++)
    {
        product=i*i*i;
        divide=1/product;
        sum=sum+divide;
        std::cout<<"1 / "<<i<<"*"<<i<<"*"<<i<<" = "<<divide<<std::endl;
    }
    std::cout<<"the sum is "<<sum;
}
