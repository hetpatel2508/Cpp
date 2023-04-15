// Create a function using the concept pointers that swaps the private data
// values of two objects of the same class type.

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
friend void swap(ract *r1,ract *r2);
int getl()
{
    return len;
}
int getb()
{
    return bre;
}
};

void swap(ract *r1,ract *r2)
{
    ract *t=new ract(0,0);    
    t->len=r1->len;
    r1->len=r2->len;
    r2->len=t->len;

    t->bre=r1->bre;
    r1->bre=r2->bre;
    r2->bre=t->bre;
    delete t;
}
int main()
{
    ract *ptr1=new ract(2,3);
    ract *ptr2=new ract(4,5);
    cout<<"Rectangle1: "<<"Length="<<ptr1->getl()<<"  "<<"Breadth="<<ptr1->getb()<<endl;
    cout<<"Rectangle2: "<<"Length="<<ptr2->getl()<<"  "<<"Breadth="<<ptr2->getb()<<endl;
    swap(ptr1,ptr2);
    cout<<"After Changes~>"<<endl;
    cout<<"Rectangle1: "<<"Length="<<ptr1->getl()<<"  "<<"Breadth="<<ptr1->getb()<<endl;
    cout<<"Rectangle2: "<<"Length="<<ptr2->getl()<<"  "<<"Breadth="<<ptr2->getb()<<endl;
    delete ptr1;
    delete ptr2;
}