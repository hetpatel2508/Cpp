/*write a function power to raise a number m to power n. The function takes a 
double value for m and int value for n. Use default value for n to make the 
function to calculate squares when this argument is omitted. */

#include<iostream>
#include<cmath>
using namespace std;

double power(double m,int n)
{
    return pow(m,n);
}

int main()
{
double m;
int n;
cout<<"enter m= ";
cin>>m;
cout<<"enter n= ";
cin>>n;

cout<<m<<"^"<<n<<"="<<power(m,n);

return 0;

}