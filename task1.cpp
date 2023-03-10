#include<iostream>
using namespace std;

int main()
{
int size;
cout<<"enter array size: ";
cin>>size;

float cgpa[size];
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value: ";
    cin>>cgpa[index];


} 
  for(int index=0;index < size;index=index+1)
{
    cout<<cgpa[index]<<"  ";
}
}