/*write a program that overloads volume functions that return volume of
cube, cuboids and cylinder.*/

#include <iostream>
using namespace std;
#define pi 3.14

int volume(int l)
{
    return l * l * l;
}

int volume(int l, int b, int h)
{
    return l * b * h;
}

float volume(int r, int h)
{
    return pi * r * r * h;
}

int main()
{
    int l, b, h, r;
    cout << "enter length= ";
    cin >> l;
    cout << "enter breadth= ";
    cin >> b;
    cout << "enter height= ";
    cin >> h;
    cout << "enter radiaus= ";
    cin >> r;

    cout<<"Volmume of cube= "<<volume(l)<<endl;
    cout<<"Volmume of cuboids= "<<volume(l,b,h)<<endl;
    cout<<"Volmume of cylinder= "<<volume(r,h)<<endl;
    
}