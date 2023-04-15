// Write a program to find the larger of two given numbers in two different 
// classes using friend function. 
#include<iostream>
using namespace std;
class cube;
class rect
{
    private:
    int len,bre;
    public:   
    rect(int l=0,int b=0)
    {
        len=l;
        bre=b;
    }
    friend void  Bigger(rect r1,cube c1);
};

class cube
{
    private:
    int len,bre;
    public:
    cube(int l=0,int b=0)
    {
        len=l;
        bre=b;
    }
    friend void  Bigger(rect r1,cube c1);
};

void Bigger(rect r1,cube c1)
{
    if(r1.len>c1.len && r1.bre>c1.bre)
    {
        cout<<"Rectangle Class is Bigger !"<<endl;
    }
    else
    {
        cout<<"Cube Class is Bigger !"<<endl;
    }
}

int main()
{
    rect r1(2,3),r2(5,6);
    cube c1(4,5),c2(1,2);
    Bigger(r1,c1);
    Bigger(r2,c2);
}