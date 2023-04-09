#include<iostream>
using namespace std;

class ract
{
    public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
};


int main()
{
    ract *ptr=new ract;
    ptr->l=5;
    ptr->b=5;
    cout<<"area= "<<ptr->area();
    return 0;
}