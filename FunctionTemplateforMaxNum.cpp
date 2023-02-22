#include<iostream>
using namespace std;
template<class t>
t maxim(t a,t b)
{
    if(a>b){
    return a;}
    else 
    {return b;}
}

int main()
{
int a,b;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
float c,d;
cout<<"enter c:";
cin>>c;
cout<<"enter d:";
cin>>d;
// int e=maxim(a,b);
cout<<"maximum of a,b: "<<maxim(a,b)<<endl;
cout<<"maximum of c,d: "<<maxim(c,d)<<endl;

return 0;
}
