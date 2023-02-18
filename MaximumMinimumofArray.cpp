#include<iostream>
using namespace std;

void Main()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    int min=A[1];
    
for(int x:A)
{
    if(x>max)
    {
        max=x;
    }
}
for(int x:A)
{
    if(x<min)
    {
        min=x;
    }
}
    
    cout<<max;
    cout<<min;
    }