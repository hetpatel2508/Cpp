#include<iostream>

int add(int x,int y)
{
    return x+y;
}
int multt(int x,int y)
{
    return x*y;
}
int divv(int x,int y)
{
    return x/y;
}

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
void getl(){return len;}
void getb(){return bre;}
int area()
{
    return len*bre;
}
};