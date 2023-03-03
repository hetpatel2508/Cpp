#include<iostream>
using namespace std;
class ractangle
{
private:
int length;
int breath;

public:
ractangle(int l=0,int b=0)
{
    length=l;
    breath=b;
}
ractangle(ractangle &r)
{
    length=r.length;
    breath=r.breath;
}
int area()
{
    return length*breath;
}
};
int main()
{
    ractangle r1(5,3);
    ractangle r2(r1);
    cout<<"Area= "<<r2.area();
    return 0;
}