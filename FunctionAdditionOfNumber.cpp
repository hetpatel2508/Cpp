#include<iostream>
using namespace std;
int add(int a,int b);

int add(int a,int b)
{
    return a+b;
}

int main()
{
int a,b;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
cout<<"Sum="<<add(a,b);
    return 0;
}