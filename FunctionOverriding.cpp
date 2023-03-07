/*function overloading ma jo banne inheritance class ma same
 function hase to te perticular class nu function j execute tase*/

#include<iostream>
using namespace std;

class parent
{
    public:
    void display()
    {
        cout<<"output of parent";
    }
};

class child : public parent
{
public:
void display()
{
    cout<<"output of child";
}
};


int main()
{
    child c;
    c.display();
    return 0;
}