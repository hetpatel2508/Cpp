#include<iostream>
using namespace std;

class rational
{
public:
int p;
int q;
rational(int a=0,int b=0)
{
    p=a;
    q=b;
}

friend rational operator+(rational r1,rational r2);

friend ostream & operator<<(ostream &out,rational &r);

};
rational temp;
rational operator+(rational r1,rational r2)
{
    // rational temp;
    temp.p=r1.p+r2.p;
    temp.q=r1.q+r2.q;
    return temp;
}

ostream & operator<<(ostream &out,rational &r)
{
    out<<r.p<<"/"<<r.q;
    return out;
}


int main()
{
    rational r1(2,3),r2(4,5),r3;
    r3=r1+r2;
    cout<<r3;
    return 0;
}
