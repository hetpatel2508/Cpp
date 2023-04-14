// Write a program to create a class TIME with members hours, minutes, and 
// seconds.Read values from keyboard and add two TIME objects by passing objects 
// to function and display result. Also define destructor.

#include <iostream>
using namespace std;

class time
{
private:
int m,h,s;

public:

time(int hr=0,int mi=0,int se=0)
{
    h=hr;
    m=mi;
    s=se;
}

int getm(){return m;}
int geth(){return h;}
int gets(){return s;}

void display()
{
    cout<<"Given Time: "<<endl;
    cout<<h<<"Hour  "<<m<<"Minutes  "<<s<<"Seconds  "<<endl;
}
};

time add(time t1,time t2)
{
    time temp(t1.geth()+t2.geth(),t1.getm()+t2.getm(),t1.gets()+t2.gets());
    return temp;
}

int main()
{
time t1(1,20,45),t2(1,45,12),t3;
t3= add(t1,t2);
t3.display();
}