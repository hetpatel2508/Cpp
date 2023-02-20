#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a="welcome";
string::reverse_iterator i;

/*for printing string*/
for(i=a.rbegin()  ;i!=a.rend()   ;i++)        
{
    cout<<*i;           
}

cout<<endl;

/*for printing string in upper case*/
for(i=a.rbegin()  ;i!=a.rend()   ;i++)        
{
    *i=*i-32;
    cout<<*i;           
}

    return 0;
}