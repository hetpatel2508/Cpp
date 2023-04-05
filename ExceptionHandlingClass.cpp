#include<iostream>
using namespace std;

class ract

{
private:
int l,b;
public:
ract(int len,int bre)
{
    l=len;
    b=bre;
    cout<<"Not Empty"<<endl;
}
ract()
{
    cout<<"Empty"<<endl;
}
int getl()
{
    return l;
}
};

int main()

{
    ract r1;
    ract r2(2,4);
    try
    {
    if(r2.getl()==2)
    {
        throw r2.getl();
    }
    }
    catch(int r)
    {
        cout<<r;
    }
}