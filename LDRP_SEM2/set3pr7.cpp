/*Write a program to demonstrate the use of inline functions by creating 2
inline functions. One inline function for multiplication operation and other
inline function for demonstrating division operation. */

#include<iostream>
using namespace std;

inline int mult(float a,float b)
{
    return a*b;
}

inline float divv(float a,float b)
{
    return a/b;
}

int main()
{
float x,y;
cout<<"enter x= ";
cin>>x;
cout<<"enter y= ";
cin>>y;

cout<<"multiplication= "<<mult(x,y)<<endl;
cout<<"division= "<<divv(x,y);

return 0;
}
