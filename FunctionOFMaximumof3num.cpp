#include<iostream>
using namespace std;
int add(int a,int b,int c);

int add(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is maximum";
        }
        else{
            cout<<"c is maximum";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"b is maximum";
        }
        else{
            cout<<"c is maximum";
        
           }
   }
}

int main()
{
int a,b,c;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
cout<<"enter c:";
cin>>c;
add(a,b,c);
    return 0;
}