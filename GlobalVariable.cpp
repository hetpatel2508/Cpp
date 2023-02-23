#include<iostream>
using namespace std;
int g=10;       // like this we can declare global variable and access them in various way
void fun2();
int fun()
{
g++;
}

int main()
{
cout<<g<<endl;
fun();
cout<<g<<endl;
fun2();
return 0;
}
void fun2()
{
    int g=2;
    {int g=5;
    cout<<g<<endl;}
    cout<<g<<endl;   
    cout<<::g<<endl;        //used to show global variable 

    /*a kali batava mate ke jo print karta vacce koi kaunc avse to te iggnore tase*/
}