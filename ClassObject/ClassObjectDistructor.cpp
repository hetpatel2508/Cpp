#include<iostream>
using namespace std;

class book
{
    public:
    int pages;
    string name;
    book(int p=0,string n=0)
    {
        pages=p;
        name=n;
    }
    ~book()
    {
        cout<<"Object is destroied"<<endl;
    }
};

int main()
{
    book b1(100,"Devla Ne Lavario");
    cout<<"page= "<<b1.pages<<"  \n"<<"Book Name= "<<b1.name<<endl;
    b1.~book();
}