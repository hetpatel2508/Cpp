#include<iostream>
using namespace std;

int max(int x,int y)
{
    return x>y?x:y;
}
int min(int x,int y)
{
    return x<y?x:y;
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
int (*fp)(int,int);
fp=max;
cout<<"Maximum="<<(*fp)(a,b)<<endl;
fp=min;
cout<<"Minimum="<<(*fp)(a,b)<<endl;
return 0;
}
