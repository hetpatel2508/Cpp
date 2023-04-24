//  Write a program to create a class for defining COMPLEX numbers and overload 
// three set functions (setters). The first set function which takes no argument is used to 
// create objects which are not initialized, second which takes one argument is used to 
// initialize real and imaginary parts to equal values and third which takes two argument 
// is used to initialized real and imaginary to two different values. Define a display 
// function that prints the complex number. 
#include<iostream>
using namespace std;

class COMPLEX
{
private:
int real;
int img;

public:
void set()
{
    COMPLEX ctemp;
}
void set(int a)
{
    real=a;
    img=a;
}
void set(int a,int b)
{
    real=a;
    img=b;
}

int getr()
{
    return real;
}
int geti()
{
    return img;
}
};

int main()
{
    COMPLEX c1,c2,c3;
    c1.set();
    c2.set(2);
    c3.set(3,4);

    cout<<"For 2st object: "<<endl;
    cout<<c2.getr()<<" +"<<"i"<<c2.geti()<<endl;

    cout<<"For 3st object: "<<endl;
    cout<<c3.getr()<<" +"<<"i"<<c3.geti()<<endl;
}