#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
char a[50]="het",b[50]="patel";
strcpy(b,a);
cout<<a<<endl;
cout<<b<<endl;
strncpy(b,a,2);
cout<<a<<endl;
cout<<b<<endl;

    return 0;
}