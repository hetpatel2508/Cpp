#include<iostream>
using namespace std;
int *fix(int a)
{
int *ptr=&a;
cout<<ptr<<endl;
return ptr;
}
int main()
{
    int b=5;
    cout<<fix(b)<<endl;
return 0;
}
