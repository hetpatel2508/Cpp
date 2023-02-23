#include<iostream>
using namespace std;

int fact(int x)
{
    int f=1;
    if(x>0)
    {
    f=x*fact(x-1);
    }
    return f;
}

int main()
{
 int a;
 cout<<"enter a:";
 cin>>a;
 cout<<"Factorial="<<fact(a);
return 0;
}
