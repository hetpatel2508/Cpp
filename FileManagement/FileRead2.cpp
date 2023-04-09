#include<iostream>
#include<fstream>
using namespace std;

class tst
{
private:
string t;
int pr;
int qe;
public:
void set(string n=0,int p=0,int q=0)
{
t=n;
pr=p;
qe=q;
}

string getn()
{
    return t;
}

int getp()
{
    return pr;
}

int getq()
{
    return qe;
}

friend ifstream & operator >>(ifstream &i,tst &tm);
};

ifstream & operator >>(ifstream &i,tst &tm)
{
    i>>tm.t>>tm.pr>>tm.qe;
    return i;
}

int main()
{
tst t1;

ifstream ifs("trytry.txt");
ifs>>t1;
cout<<"name= "<<t1.getn()<<"  "
    <<"Price= "<<t1.getp()<<"  "
    <<"Quantity= "<<t1.getq()<<endl;
ifs.close();
}

