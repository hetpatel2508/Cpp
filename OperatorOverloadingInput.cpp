#include<iostream>
using namespace std;

class ract
{
private:
int len,bre;

public:
friend istream & operator >>(istream &i,ract &r); 
int getlength()
{
    return len;
}
int getbre()
{
    return bre;
}
};


istream & operator >>  (istream &ins,ract &r)
{
cout<<"Enter length:";
 ins >> r.len;
 cout<<"enter breadth:";
 ins >>r.bre;
return ins;
}

int main()
{
    ract r1;
    cin>>r1;
    cout<<"Length= "<<r1.getlength()<<"\n"<<"Breadth = "<<r1.getbre();
}