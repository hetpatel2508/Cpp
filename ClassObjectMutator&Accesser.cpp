#include<iostream>
using namespace std;
class ractangle
{
private:
int length;
int breath;
public:

//set function length&breath ne value apva mate use tay 6
void setlength(int l)
{
    length=l;
}
void setbreath(int b)       
{
    breath=b;
}

//get function lenght&breath ne value just show karva vapray
int getlength()
{
    return length;
}
int getbreath()
{
    return breath;
}
int area()
{
    return length*breath;
}
};

int main()
{
    ractangle r1;
    r1.setlength(5);
    r1.setbreath(6);
    cout<<"Area= "<<r1.area()<<endl;
    cout<<"Length= "<<r1.getlength()<<endl;
    cout<<"Breath= "<<r1.getbreath()<<endl;
    return 0;
}