#include<iostream>
int main()
{
    int number;
    int number2;
    int i;
    int sub;
    int remainder;
    std::cout<<"enter starting number:"<<std::endl;
    std::cin>>number;
    std::cout<<"enter limit:"<<std::endl;
    std::cin>>number2;
    for(sub=number;sub<=number2;sub++)
    {
        for(i=2;i<sub;i++)
        {
            remainder=sub%i;
            if(remainder==0 )
            {
                break;
            }
            else if (remainder !=0 && i==sub-1)
            {
                std::cout<<sub<<std::endl;
            }
        }
        if(sub==2)
        {
            std::cout<<sub<<std::endl;
        }
    }
}
