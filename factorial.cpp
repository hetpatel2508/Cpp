#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
cout<<"Enter number: ";
cin>>n;
for(int i=n;i>0;i--)
{
    fact=fact*i;

}

cout<<"Factorial of number is "<<fact;
}
