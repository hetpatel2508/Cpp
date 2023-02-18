#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
char a[50]="x=1;y=2;z=3";
char *token=strtok(a,";");
while(token!=NULL)
{
    cout<<token<<endl;              //ahi token pachi nu step neche type tase 
    token=strtok(NULL,";");
}
    return 0;
}