/*Write a program to find the maximum price of 2 books and return that book as 
object. Use object as function argument*/

#include<iostream>
using namespace std;

class book
{
private:
float price;

public:

void set(float p)
{
 price=p;   
}

void fun(book b1,book b2)
{
    if(b1.price>b2.price)
    {
        cout<<"Maxinmum price is "<<b1.price;
    }
    else
    {
        cout<<"Maxinmum price is "<<b2.price;
    }
}
};

int main()
{
book b1,b2,b3;

b1.set(100);  b2.set(150);

b3.fun(b1,b2);

}