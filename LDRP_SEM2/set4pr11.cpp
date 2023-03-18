/*Write a program to create a class for book having title, price and publisher
having 2 member functions getdetails( ) and setdetails( ).Write a program to
 create an array of 5 objects for previous program. */


#include <iostream>
using namespace std;

class book
{
private:
    string title;
    int price;
    string publi;

public:
    void setdetails(string t, int pr, string p)
    {
        title = t;
        price = pr;
        publi = p;
    }

    void getdetails()
    {
        cout << "\nTitle= " << title << endl;
        cout << "Price= " << price << endl;
        cout << "Publication= " << publi << endl;
    }
};

int main()
{
    book b[5];
    b[0].setdetails("book1",200,"het");
    b[1].setdetails("book2",300,"dev");
    b[2].setdetails("book3",400,"deep");
    b[3].setdetails("book4",500,"smit");
    b[4].setdetails("book5",600,"sneh");

    for(int a=0;a<5;a++)
    {
        b[a].getdetails();
        cout<<"\n";
    }
}