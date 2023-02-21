#include<iostream>
using namespace std;
int add(int x,int y);
int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z);
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y);
float add(float x,float y)
{
return x+y;
}
int main()
{
int a=2,b=3,c,d;
c=add(a,b);
d=add(a,b,c);
cout<<c<<endl;
cout<<d<<endl;

float i=1.25,j=2.50;
cout<<add(i,j)<<endl;

    return 0;
}