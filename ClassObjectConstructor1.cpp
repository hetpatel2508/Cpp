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
int area()
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