#include<iostream>
using namespace std;
int &fix(int &a)
{
    cout<<&a<<endl;
return a;
}
int main()
{
    int b=5;
    cout<<&fix(b)<<endl;        //fix(b) and b have same address;
return 0;
}
