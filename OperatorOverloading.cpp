#include<iostream>
using namespace std;

class complex
{
public:
int real;       // a+ bi jya a=real and b=imaginatry
int img;

complex add(complex c)
{
    complex t;
    t.real=real+c.real;         //ahi banne na a & b no + tai a+ib na form ma answer malse
    t.img=img+c.img;
    return t;
}
};

int main()
{
    complex c1;
    complex c2;
    complex c3;
    c1.real=2; c1.img=5;
    c2.real=3; c2.img=9;

    c3=c1.add(c2);
    cout<<c3.real<<endl;
    cout<<c3.img;
}