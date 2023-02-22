#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
int x=10,y=20;
swap(x,y);
cout<<x<<endl<<y;           
/*ahi x & y ne value change nahi tay pointer ke address hoy to j change tase*/

return 0;
}
