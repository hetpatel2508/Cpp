// Write a program to create a class TEST with one int member. Define constructor, 
// destructor and getter for the same. Define a function (outside class) find_square that 
// takes object as an argument and returns square of int member of that object. Also 
// define destructor. 

#include<iostream>
using namespace std;

class test
{
private:
int x;

public:
test(int a=0)
{
    x=a;
}

int get()
{
    return x;
}

~test()
{
cout<<"Object is been destroid"<<endl;
}
friend int sqrt(test t);

};

int sqrt(test t)
{
    return (t.x)*(t.x);
}

int main()
{
    test t1(5);
    cout<<"Square= "<<sqrt(t1)<<endl;
    t1.~test();
}