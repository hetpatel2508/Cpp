#include<iostream>
using namespace std;

class student
{
private:
int rollno;
string name;
int sub1,sub2,sub3;

public:
void getroll(int n)
{
    rollno=n;
}
void getname(string n)
{
    name=n;
}
void getwsubmarks(int a,int b,int c)
{
    sub1=a;
    sub2=b;
    sub3=c;
}

int sets1()
{
    return sub1;
}
int sets2()
{
    return sub2;
}
int sets3()
{
    return sub3;
}

int total()
{
    return sub1+sub2+sub3;
}

void grade()
{
    if((total()/3)>85 && (total()/3)<=100)
    cout<<" A";
    else if((total()/3)>70)
    cout<<"B";
    else if((total()/3)>60)
    cout<<"C";
    else if((total()/3)>50)
    cout<<"D";
    else if((total()/3)>35)
    cout<<"E";
    else
    cout<<"FAIL :(";
}
};

int main()
{
    student s;
    s.getroll(273);
    s.getname("Patel Het Rajeshkumar");
    s.getwsubmarks(65,55,70);
    cout<<"Science= "<<s.sets1();
    cout<<"\nPhysics= "<<s.sets2();
    cout<<"\nMaths= "<<s.sets3();
    cout<<"\nTotal= "<<s.total()<<endl;
    cout<<"Grade= ";
    s.grade();
    return 0;
}