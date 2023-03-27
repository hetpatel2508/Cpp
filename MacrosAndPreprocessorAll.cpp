#include<iostream>
using namespace std;
#define pi 3.14
#define sqr(x) (x*x)
#define o cout
#define i cin
#define msg(x) #x
#ifndef pi
    #define pi 3
    #endif

int main()
{
    int n;
o<<"Enter number: ";
i>>n;

o<<"Sqare= "<<sqr(n)<<endl;

o<<"Massage= "<<msg(Hello! This is Het Patel)<<endl;

o<<"Value of PI= "<<pi;

}