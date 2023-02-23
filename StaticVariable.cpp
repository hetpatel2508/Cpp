#include<iostream>
using namespace std;
int fun()
{
static int a=1;
a++;
cout<<a<<" ";
}

int main()
{
    fun();
    fun();
    fun();
return 0;
}
