#include<iostream>
using namespace std;

class shape
{
    public:
    int length;
    int breath;
    int re;
    virtual float area()=0;
};

class ract : public shape
{
    public:
    float area()
    {
        return length*breath;
    }
};

class circle : public shape
{
    public:
    float area()
    {
        return re*re*3.14;
    }
};

int main()
{
    ract r1;
    r1.breath=4;
    r1.length=5;
    cout<<"Ractangle area= "<<r1.area()<<endl;

    circle c1;
    c1.re=2;
    cout<<"Circle area= "<<c1.area();
    
    return 0;
}