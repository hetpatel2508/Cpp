#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
char a[50]="het",b[50]="patelhetrajeshkumar";
cout<<strchr(b,'h')<<endl;          //ahi b ma first h pachi nu badhu print tase including h;


cout<<strrchr(b,'l');              //ahi b ma fist h nahi but second h pachi nu badhu print tase including h;
                                   //and jo second latter na hoy string ma to first h pachi nu badhu print tase;

    return 0;
}