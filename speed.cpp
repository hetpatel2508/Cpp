#include<iostream>
using namespace std;
int main()
{
    int v,u,a;
    cout<<"enter v: ";
    cin>>v;
    cout<<"enter u: ";
    cin>>u;
    cout<<"enter a: ";
    cin>>a;
    cout<<"speed is "<<(float)((v*v)-(u*u))/(2*a);
    return 0;
}