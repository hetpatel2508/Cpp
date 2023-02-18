#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
char a[50]="230",b[30]="25.55";
long int x=strtol(a,NULL,10);       //  ahi last ma only 10 j hovu joia
float y=strtof(b,NULL);
cout<<x<<endl;          //all the arithmetic operations of x & y is possible 
cout<<y<<endl;
    return 0;
}