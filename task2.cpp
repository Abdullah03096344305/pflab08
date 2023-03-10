#include<iostream>
using namespace std;

main()
{
int size;
cout<<"enter array size: ";
cin>>size;
int sum=0;
int average=0;

float cgpa[size];
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value: ";
    cin>>cgpa[index];


} 
  for(int index=0;index < size;index=index+1)
{
   
     sum=sum+cgpa[index];

 average=sum/size;


}
cout<<"sum = "<<sum<<endl;
cout<<"average = "<<average<<endl;

    
}