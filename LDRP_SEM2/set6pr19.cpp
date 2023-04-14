//  Implement a program to demonstrate the concept of operator overloading. Overload 
// ‘+’ and ‘=’ operators

#include<iostream>
using namespace std;

class rect
{
public:
int len,bre;
rect(int l=0,int b=0)
{
    len=l;
    bre=b;
}

friend rect operator+(rect r1,rect r2);
rect operator = (const rect x)
{

len=x.len;
bre=x.bre;
return *this;
}

};

rect operator+(rect r1,rect r2)
{
    rect temp;
    temp.len=r1.len+r2.len;
    temp.bre=r1.bre+r2.bre;
    return temp;
}


int main()
{
    rect r1(2,3),r2(4,5),r4(2,3),r3,r5;
    r3=r1+r2;
    cout<<"Demonstration of + operator overloading: "<<endl<<endl;
    cout<<"Length: "<<r3.len<<"  "<<"Breadth: "<<r3.bre<<endl<<endl;
    r4=r3;
    cout<<"Demonstration of = operator overloading: "<<endl<<endl;
    cout<<"Length: "<<r4.len<<"  "<<"Breadth: "<<r4.bre<<endl;

}