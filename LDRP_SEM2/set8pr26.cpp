// Write a program to define the function template for
//  calculating the square of given 
// number with different data types. 
#include<iostream>
using namespace std;

template<class t>
t SQUARE(t num)
{
    return num*num;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    double b;
    cout<<"Enter the number: ";
    cin>>b;
    cout<<"Square= "<<SQUARE(a)<<endl;
    cout<<"Square= "<<SQUARE(b)<<endl;
}