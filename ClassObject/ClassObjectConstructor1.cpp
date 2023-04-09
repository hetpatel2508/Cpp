#include<iostream>
using namespace std;
class ractangle
{
private:
int length;
int breath;

public:
ractangle()         //default constructor
{
    length=0;
    breath=0;
}
ractangle(int l,int b)   //perametarise constructor
{
    length=l;
    breath=b;
}
ractangle(ractangle &r)     //copy constructor
{
    length=r.length;
    breath=r.breath;
}
int area()          //faciletator
{
    return length*breath;
}
};

int main()
{
ractangle r1(5,2);
cout<<"Area= "<<r1.area();
    return 0;
}