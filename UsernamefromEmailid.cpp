#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a;
cout<<"enter email id:";
getline(cin,a);
int i=int(a.find('@'));
cout<<"Username:"<<a.substr(0,i)<<endl;
    return 0;
}