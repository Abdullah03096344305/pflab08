#include<iostream>
using namespace std;

main()
{
int size,value;
cout<<"enter array size: ";
cin>>size;
float reverse[size];
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value: ";
    cin>>reverse[index];
    
} 
for(int index=size-1;index>=0;index=index-1)
{
cout<<reverse[index]<<" "<<endl;

}

    
}