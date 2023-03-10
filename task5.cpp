#include<iostream>
using namespace std;

main()
{
int size,value,number;
cout<<"enter array size: ";
cin>>size;
float reverse[size];
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value: ";
    cin>>reverse[index];
    
} 
cout<<"enter another number: ";
cin>>number;
for(int index =0;index < size;index=index+1)
{

int a=number*reverse[index];
cout<<"a =  "<<a<<endl;
}


}

    
