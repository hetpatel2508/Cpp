#include<iostream>
using namespace std;

class ractangle
{
private:
int length;
int breath;

public:
ractangle();
ractangle(int l,int b);
ractangle(ractangle &r);

void setlength(int l);
void setbreath(int b);

int getlength();
int getbreath();

int area();
int perimeter();

bool  checksquare();

~ractangle();

};


int main()
{
 ractangle r1;
 ractangle r2(r1);
 r1.setlength(5);
 r1.setbreath(6);

 cout<<"Length= "<<r1.getlength()<<endl;
 cout<<"Breath= "<<r1.getbreath()<<endl;

cout<<"Area= "<<r1.area()<<endl;
cout<<"Perameter= "<<r1.perimeter()<<endl;

if(r1.checksquare())
{
    cout<<"Square";
}
else{
    cout<<"Not Square";
}
return 0;
}

ractangle::ractangle()
{
    length=0;
    breath=0;
}
ractangle::ractangle(int l,int b)
{
length=l;
breath=b;
}
ractangle::ractangle(ractangle &r)
{
    length=r.length;
    breath=r.breath;
}

void ractangle::setlength(int l)
{
length=l;
}
void ractangle::setbreath(int b)
{
    breath=b;
}

int ractangle::getlength()
{
    return length;
}
int ractangle::getbreath()
{
    return breath;
}

int ractangle::area()
{
    return length*breath;
}
int ractangle::perimeter()
{
    return 2*(length+breath);
}

bool  ractangle::checksquare()
{
return length==breath;
}
ractangle ::~ractangle()
{
    cout<<"\nClass ractangle destroied";
}

