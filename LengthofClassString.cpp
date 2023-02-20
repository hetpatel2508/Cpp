#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a;
string::iterator i;
int count=0;
cout<<"enter string: ";
getline(cin,a);

for(i=a.begin();i!=a.end();i++)
{
    count++;
}

cout<<"Length="<<count<<endl;

    return 0;
}