#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
string a="hetpatel";
cout<<a.length()<<endl;             //both length & size are used to show length of a string
cout<<a.size()<<endl;           

cout<<a.capacity()<<endl;           //used to show capacity of a string 

a.resize(35);                       //it will increase given capacity from a default capacity 
cout<<a.capacity()<<endl;

cout<<a.max_size()<<endl;           //used to show the maximum capacity of a string

a.clear();                          //after a.clear all the values of a string will be erased 

if(a.empty())                       //used to check wether given string is empty or not 
{
    cout<<"Now string is clear :)";
}

    return 0;
}