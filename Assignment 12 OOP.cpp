#include<iostream>
#include<iterator>
#include<vector>
#include<array>
int main()
{
int size;
int size2;
int sub;
int position;
std::array<int,5> arr;
for(int i=0;i<arr.size();i++)
{
std::cout<<"Enter Value:"<<std::endl;
std::cin>>arr.at(i);
}
std::cout<<"First Element of Array = "<<arr.front()<<std::endl;
std::cout<<"Last Element of Array = "<<arr.back()<<std::endl;

std::vector<int> vec;
std::vector<int> vec2;
std::cout<<"Enter Size for vec:"<<std::endl;
std::cin>>size;
std::cout<<"Enter Size for vec2:"<<std::endl;
std::cin>>size2;
for(int i=0;i<size;i++)
{
std::cout<<"Enter Value(vec):"<<std::endl;
std::cin>>sub;
vec.push_back(sub);
}
for(int i=0;i<size2;i++)
{
std::cout<<"Enter Value(vec2):"<<std::endl;
std::cin>>sub;
vec2.push_back(sub);
}
if(vec.empty()==true && vec2.empty()==true)
{
std::cout<<"both vectors are still empty"<<std::endl;
}
else if(vec.empty()==false && vec2.empty()==false)
{
std::cout<<"both vectors are filled"<<std::endl;
}

std::vector<int>::iterator i=vec.begin();
std::cout<<"Enter Position in the vector vec where you want vec2 elements to be placed:"<<std::endl;
std::cin>>position;
std::advance(i,position-1);

std::copy(vec2.begin(),vec2.end(),std::inserter(vec,i));
for(int i=0;i<vec.size();i++)
{
std::cout<<vec[i]<<std::endl;
}

std::cout<<"Current Capacity of Vec1 ="<<vec.capacity()<<std::endl;
vec.shrink_to_fit();
std::cout<<"Capacity after Shrinking Vec1 = "<<vec.capacity()<<std::endl;
}