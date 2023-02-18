#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    cout<<"Root of equation is "<<(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    return 0;
}