#include<iostream>
using namespace std;

class base
{
    public:
    int x;
};
class derive:public base
{
public:
int y;
void show()
{
    cout<<x<<" "<<y;
}
};

int main()
{
    base b1;
    derive d1;
    d1.x=5;
    d1.y=6;
    d1.show();
    return 0;
}