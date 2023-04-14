// Write a program to perform addition of two complex numbers using constructor 
// overloading. Define add function outside the class that returns the addition. 
#include<iostream>
using namespace std;

class COMPLEX
{
private:
int img,real;

public:
COMPLEX()
{
    img=0;
    real=0;
}

COMPLEX(int r,int i)
{
    img=i;
    real=r;
}

void add(COMPLEX c1,COMPLEX c2);

};

void COMPLEX::add(COMPLEX c1,COMPLEX c2)
{
    cout<<"After Addition: "<<endl;
    cout<<c1.real+c2.real<<"+  i"<<c1.img+c2.img;
}


int main()
{
    COMPLEX c1(2,3),c2(4,5),c3;
    c3.add(c1,c2);
}