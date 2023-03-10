#include<iostream>
using namespace std;

main()
{
int size,value;
cout<<"enter array size: ";
cin>>size;

float finder[size];
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value: ";
    cin>>finder[index];


} 
for(int index=0;index < size;index=index+1)
{
    cout<<"enter value you want to search in array: ";
    cin>>value;
if(value==finder[index])
{
    cout<<"present"<<endl;

}
else if(value!= finder[index])
{
    cout<<"absent"<<endl;
}

} 

    
}