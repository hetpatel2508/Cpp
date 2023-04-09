#include<iostream>
using namespace std;

class ract
{
    public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
};

int main()
{
    ract r1;
r1.l=5;
r1.b=5;
cout<<"area= "<<r1.area();
return 0;
}
