#include<iostream>
using namespace std;

main()
{
string name;
getline(cin,name);
int count = name.length();

for(int index = count;index>=0;index--)
{
    cout<<name[index];
}
}
