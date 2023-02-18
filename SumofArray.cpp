#include<iostream>
using namespace std;
int main()
{
    int A[]={6,7,8,9,10};
    // int sum=0;
    // for(int &x:A)
    // {
    //     sum=sum+x;
    // }
    // cout<<sum<<endl;
    for(int &x: A)
    {
        cout<<x<<endl;
    }
return 0;
}