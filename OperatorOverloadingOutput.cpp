#include<iostream>
using namespace std;

class complex
{
public:
int real;
int img;
complex(int r,int i)
{
    real=r;
    img=i;
}

friend ostream &operator<<(ostream &o,complex &c);
};
ostream &operator<<(ostream &out,complex &c)
{
    out<<c.real<<" i"<<c.img;
    return out;
}

int main()
{
    complex c1(2,5);
    cout<<c1;
    return 0;
}

