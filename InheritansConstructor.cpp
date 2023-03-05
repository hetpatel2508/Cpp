#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"Empty Parent"<<endl;
    }
    parent(int p)
    {
        cout<<"Parent= "<<p<<endl;
    }
};

class child:  public parent
{
public:
child()
{
    cout<<"Empty Child";
}
child(int c)
{
    if(c==0)
    {cout<<"Empty Child";}
   else cout<<"Child= "<<c<<endl;
}

child(int p,int c):parent(p)
{
    cout<<"child= "<<c<<endl;
}
};

int main()
{
    child c1(3,5);
    return 0;
}