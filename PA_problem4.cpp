#include<iostream>
void binary(long int);
void octal(long int);
void hexadecimal(long int);
int main()
{
    long int decimal;
    char choice;
    std::cout<<"enter decimal number:"<<std::endl;
    std::cin>>decimal;
    std::cout<<"1.Binary conversion"<<std::endl;
    std::cout<<"2.octal conversion"<<std::endl;
    std::cout<<"3.Hexadecimal conversion"<<std::endl;
    std::cin>>choice;
    switch(choice)
    {
        case 'b':binary(decimal);
                 break;
        case 'B':binary(decimal);
                 break;
        case 'o':octal(decimal);
                 break;
        case 'O':octal(decimal);
                 break;
        case 'h':hexadecimal(decimal);
                 break;
        case 'H':hexadecimal(decimal);
                 break;
                 
    }
}

void binary(long int n)
{
    int remainder;
    int arr[100];
    int increase=0;
    int arr2[100];
    int increase2=0;
    int i;
    do{
        remainder=n%2;
        arr[increase]=remainder;
        increase++;
        n=n/2;
    }
    while(n>1);
    arr[increase]=n;
    for(i=increase;i>=0;i--)
    {
       arr2[increase2]=arr[i];
       increase2++;
    }
    for(i=0;i<increase2;i++)
    {
        std::cout<<arr2[i];
    }
}

void octal(long int n)
{
    int remainder;
    int arr2[10]={1,2,4,8,16,32,64,128,256,512};
    int arr[100];
    int increase=0;
    int i;
    int arr3[10];
    int counter=0;
    int increase3=0;
    int sum=0;
    int increase2=0;
    do{
        remainder=n%2;
        arr[increase]=remainder;
        increase++;
        n=n/2;
    }
    while(n>1);
    arr[increase]=n;
    for(i=0;i<=increase;i++)
    {
        if(arr[i]==0)
        {
            increase2+=1;
        }
        else if(arr[i]==1)
        {
            sum=sum+arr2[increase2];
            increase2++;
        }
        if(counter==2 || i==increase)
        {
            arr3[increase3]=sum;
            sum=0;
            increase3++;
            counter=-1;
            increase2=0;
        }
        counter++;
    }
    std::cout<<"\n\n";
    for(i=increase3-1;i>=0;i--)
    {
        std::cout<<arr3[i];
    }
}

void  hexadecimal(long int n)
{
    int remainder;
    int arr2[10]={1,2,4,8,16,32,64,128,256,512};
    int arr[100];
    int increase=0;
    int i;
    int arr3[10];
    int counter=0;
    int increase3=0;
    int sum=0;
    int increase2=0;
    do{
        remainder=n%2;
        arr[increase]=remainder;
        increase++;
        n=n/2;
    }
    while(n>1);
    arr[increase]=n;
    for(i=0;i<=increase;i++)
    {
        if(arr[i]==0)
        {
            increase2+=1;
        }
        else if(arr[i]==1)
        {
            sum=sum+arr2[increase2];
            increase2++;
        }
        if(counter==3 || i==increase)
        {
            arr3[increase3]=sum;
            sum=0;
            increase3++;
            counter=-1;
            increase2=0;
        }
        counter++;
    }
    std::cout<<"\n\n";
    for(i=increase3-1;i>=0;i--)
    {
        std::cout<<arr3[i];
    }
}
