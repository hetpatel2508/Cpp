#include<iostream>
using namespace std;

class parent
{
    public:
   virtual void display()
    {
        cout<<"output of parent";
    }
};

class child : public parent
{
public:
void display()
{
    cout<<"output of child";
}
};


int main()
{
    parent *c=new child();
    c->display();
    return 0;
}