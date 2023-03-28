#include<iostream>
#include<fstream>
using namespace std;

class ract
{
public:
int len,bre;
friend ostream & operator <<(ostream &o,ract &r);
};
ostream & operator <<(ostream &o,ract &r)
{
    o<<"Length= "<<r.len<<"  "<<"Brreadth= "<<r.bre<<endl;
    return o;
}

int main()
{
    ract r1;
    r1.len=2; r1.bre=5;
    ofstream of("testfile.txt");
    of<<r1;

    of.close();
}