#include<iostream>
using namespace std;

string a="Het";

class name
{
public:
void fun();
};

void name::fun()
{
    cout<<"Rajeshkumar";
}

int main()
{
    name n1;
    string a="Patel";
    cout<<a<<" "<<::a<<" ";
    n1.fun();
}