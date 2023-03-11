#include<iostream>
using namespace std;

template<class t>
class ract 
{
private:
t len;
t bre;

public:

ract(t l,t b)
{
    len=l;
    bre=b;
}

t area()
{
    return len*bre;
}
};

// template<class t>
// t ract<t>::area()
// {
//     return len*bre;
// }

int main()
{
ract<float> r1(2.25,4.75);
cout<<r1.area();
}