#include<iostream>
using namespace std;

template <class t>
t add(t a,t b)
{
return a+b;
}

int main()
{
float a,b;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;

cout<<"sum of a,b: "<<add(a,b)<<endl;

return 0;
}
