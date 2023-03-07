#include<iostream>
using namespace std;

class car
{
public:
virtual void start()
{
    cout<<"car start"<<endl;
}
};

class ford : public car
{
public:

void start()
{
    cout<<"ford start"<<endl;
}
};

class swift : public car
{
public:
void start()
{
    cout<<"swift start"<<endl;
}
};

int main()
{
    car *c1=new ford();
    c1->start();

    car *c2=new swift();
    c2->start();

    return 0;
}