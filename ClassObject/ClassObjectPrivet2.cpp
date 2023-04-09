#include<iostream>
using namespace std;

class ract
{
    private:
    int length;
    int bredth;
    public:
   /* void setlength(int l)
    {
        length=l;
    }
    void setbredth(int b)
    {
        bredth=b;
    }*/
int getlength(int a)
{
    return length=a;
}
int getbredth(int b)
{
    return bredth=b;
}
    int area()
    {
        return length*bredth;
    }
};


int main()
{
    ract r;
    int a,b;
    cout<<"Enter l&b= ";
    cin>>a>>b;
    r.getlength(a);
    r.getbredth(b);
    cout<<"area= "<<r.area();
}




