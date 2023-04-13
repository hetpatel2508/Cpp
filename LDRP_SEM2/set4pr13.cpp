//  With reference to previous program, add 2 member variables serial_no and 
// no_of_books (declare both as static variables) in class named books .Create a friend
// function getcount( ) to demonstrate the concept of friend function.

#include<iostream>
using namespace std;

class book
{
private:
float price;
string name;
int pages;
static int no_of_books;
static int serial_no;

public:
book()
{
 no_of_books++;
 serial_no++;
}
friend void getcount();
};

void getcount()
{
    cout<<"Book no.= "<<book::no_of_books;
}

int book::serial_no=-1;
int book::no_of_books=0;

int main()
{
book b1,b2,b3,b4,b5,b6;

getcount();

}