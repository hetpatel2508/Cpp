#include<iostream>
using namespace std;
class ractangle
{
// private:
public:
int length;
int breath;
void setlength(int l)
{
    length=l;
}
void setbreath(int b)
{
    breath=b;
}

friend ractangle operator+(ractangle r1,ractangle r2);

int area()
{
    return length*breath;
}
};

ractangle operator+(ractangle r1,ractangle r2)
{
    ractangle temp;
    temp.length=r1.length+r2.length;
    temp.breath=r1.breath+r2.breath;
    return temp;
}

int main()
{
    ractangle r1,r2,r3;
    r1.length=5; r2.length=6;
    r1.breath=7; r2.breath=8;
    r3=r1+r2;
    cout<<r3.length<<endl;
    cout<<r3.breath<<endl;
    cout<<r3.area();
    
    return 0;
}