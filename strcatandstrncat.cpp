#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
char a[50]="het",b[50]="patel";
strcat(b,a);
cout<<a<<endl;
cout<<b<<endl;
strncat(b,a,2);
cout<<a<<endl;
cout<<b<<endl;

    return 0;
}