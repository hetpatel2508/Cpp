#include<iostream>
using namespace std;

int main()
{
    [](){cout<<"Hello ";}();
    auto a=[](){cout<<"World !"<<endl;};
    a();

    [](int x,int y){cout<<"sum="<<x+y<<endl;}(10,20);
    
    auto b=[](int x,int y){return x*y;}(5,2);
    cout<<"Multiplication= "<<b<<endl;

    int x=10,y=5;
    [x,y](){cout<<"Division= "<<x/y<<endl;}();

    int z=5;
    [z](){cout<<z<<endl;}();
    z++;
    [z](){cout<<z<<endl;}();

    /*but if we want to increment inside the function we have to do &a*/
    
    // [z](){cout<<++z<<endl;}(); it will give error
    [&z](){cout<<++z<<endl;}();

    float m=1.25,n=3.75;
    auto o=[m,n]()->int{return m+n;}; //return type in lambdaExpression
    cout<<"Addition: "<<o();
}