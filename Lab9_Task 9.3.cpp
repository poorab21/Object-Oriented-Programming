#include<iostream>
#include<fstream>
int main()
{
int arr[100];
int count=0;
int sub;
std::ifstream fileholder;
fileholder.open("file.txt");
while(fileholder>>sub)
{
arr[count]=sub;
count++;
}
for(int i=0;i<count;i++)
{
std::cout<<arr[i]<<std::endl;
}
fileholder.close();
}