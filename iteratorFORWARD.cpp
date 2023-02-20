#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a="welcome";
string::iterator i;

/*for printing string*/
for(i=a.begin()  ;i!=a.end()   ;i++)        
{
    cout<<*i;           
}

cout<<endl;

/*for printing string in upper case*/
for(i=a.begin()  ;i!=a.end()   ;i++)        
{
    *i=*i-32;
    cout<<*i;           
}

    return 0;
}