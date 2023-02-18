#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout<<"Enter size: ";
    cin>>size;
    int a[size];
    cout<<"Enter elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(int x:a)
    {
        sum=sum+x;
    }
    cout<<"Sum="<<sum<<endl;
    cout<<"Average="<<(float)sum/size;
    return 0;
}