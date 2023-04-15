#include <memory>
#include<iostream>
using namespace std;

class ract
{
private:
int len,bre;

public:
ract(int l=0,int b=0)
{
    len=l;
    bre=b;
}
int getl()
{
    return len;
}
int getb()
{
    return bre;
}
int area()
{
    return len*bre;
}
};

int main()
{
    // ract r1;
    unique_ptr<ract> ptr1(new ract(5,10));
    cout<<"Lenght: "<<ptr1->getl()<<"\nBreadth: "<<ptr1->getb()<<"\nArea: "<<ptr1->area()<<endl;
    cout<<"\nAfter Assigning new pointer,"<<endl;

    unique_ptr<ract> ptr2;
    ptr2=move(ptr1);
    cout<<"Lenght: "<<ptr2->getl()<<"\nBreadth: "<<ptr2->getb()<<"\nArea: "<<ptr2->area()<<endl;
    return 0;
}