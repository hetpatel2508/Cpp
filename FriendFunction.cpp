/*normal situation ma jo class ne bahar private&proteced variable use karva hoy to getlen&setlen function 
bnava pade but friend use karva thi je te friend function ma dairect private&proteced variable access
kari sakay*/


#include<iostream>
using namespace std;

class ract
{
    private:  int bre;
    protected:  int hig;
    public:  int len;

    friend int area(int l,int b,int h);

};

int area(int l,int b,int h)
{
    ract t;
    t.len=l;
    t.bre=b;
    t.hig=h;
    return (t.len)*(t.bre)*(t.hig);
}

int main()
{
    cout<<"area= "<<area(2,3,4);
    return 0;
}