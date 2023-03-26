#include<iostream>
using namespace std;

class ract
{
private:
int len,bre;

public:
int getlength()
{
    return len;
}
int getbre()
{
    return bre;
}

friend istream & operator >>(istream &i,ract &r); 
friend ostream & operator <<(ostream &out,ract r33);

friend ract  operator +(ract r1,ract r2);

friend ract operator *(ract r1,ract r2);

friend ract operator /(ract r1,ract r2);

friend ract operator %(ract r1,ract r2);

};

ract operator %(ract r1,ract r2)
{
    ract t;
    t.len=(r1.len)%(r2.len);
    t.bre=(r1.bre)%(r2.bre);
    return t;
}

ract operator /(ract r1,ract r2)
{
    ract t;
    t.len=(r1.len)/(r2.len);
    t.bre=(r1.bre)/(r2.bre);
    return t;                   //ahi answer 0 malse karan ke int 6
                                //float hot to easily mali jat :(
}

ract operator *(ract r1,ract r2)
{
    ract t;
    t.len=(r1.len)*(r2.len);
    t.bre=(r1.bre)*(r2.bre);
    return t;
}

ract  operator +(ract r1,ract r2)
{
    ract t;
    t.len=r1.len+r2.len;
    t.bre=r1.bre+r2.bre;
    return t;
}

ostream & operator <<(ostream &out,ract r33)
{
    out<<"Length: "<<r33.len<<"  "<<"Breadth: "<<r33.bre<<endl;
}

istream & operator >>  (istream &ins,ract &r)
{
cout<<"Enter length:";
 ins >> r.len;
 cout<<"enter breadth:";
 ins >>r.bre;
 cout<<"\n";
return ins;
}


int main()
{
    ract r1,r2,r3,r4,r5,r6;
    cin>>r1;
    cin>>r2;
    cout<<r1;
    cout<<r2;
    r3=r1+r2;
    cout<<r3;   
    r4=r1*r2;
    cout<<r4;
    r5=r1/r2;
    cout<<r5;
    r6=r1%r2;
    cout<<r6;
    
}