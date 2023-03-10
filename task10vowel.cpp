#include<iostream>
using namespace std;

main()
{
string words;
int count=0;

cout<<"enter some words ";
getline(cin,words);

for(int index=0;words[index] != '\0';index++ )
{
if(words[index]=='a'|| words[index] == 'e'|| words[index] == 'i'|| words[index] == 'o'|| words[index] == 'u')
{
    count++;
}

}
cout<<"count: "<<count;
    
}