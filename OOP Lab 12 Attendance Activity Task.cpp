#include<iostream>
#include<iterator>
#include<vector>
int main()
{
std::vector<int> arr{1,2,3,4,5};
std::vector<int> arr2{6,7,8,9,10};
std::vector<int>::iterator i=arr.begin();
std::advance(i,5);
std::copy(arr2.begin(),arr2.end(),std::inserter(arr,i));
for(int i=0;i<arr.size();i++)
{
std::cout<<arr.at(i)<<std::endl;
}
}