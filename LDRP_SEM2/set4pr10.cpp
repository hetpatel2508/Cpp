/*Write a program to create a class for book having title, price and publisher
having 2 member functions getdetails( ) and setdetails( ). Also create the object
of 2 different books, use getter and setter for both the objects*/

#include <iostream>
using namespace std;

class book
{
private:
    string title;
    int price;
    string publi;
public:

    void setdetails(string t,int pr,string p)
    {
        title=t;
        price=pr;
        publi=p;
    }

    void getdetails()
    {
        cout<<"\nTitle= "<<title<<endl;
        cout<<"Price= "<<price<<endl;
        cout<<"Publication= "<<publi<<endl;

    }

};

int main()
{
    book b1,b2;
    b1.setdetails("Patel Ne Karamato",1000,"Het Patel");
    b2.setdetails("Devla Ne Lavario",500,"Dev Patel");

    b1.getdetails();
    b2.getdetails();
}