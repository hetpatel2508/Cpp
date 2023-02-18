#include<iostream>
using namespace std;
int main()
{
    // way of declaring string;
    string a="hello this is het patel here have a good day";
    cout<<a<<endl;
    // getting string values from the user;
    char b[50];
    string c;
    cout<<"Enter your name: ";
    cin.get(b,50);
    cout<<"Welcome : "<<b<<endl;
    cin.ignore();    //here ignore is used for start taking value for new string 
    cout<<"Enter Your Class Division: "<<endl;
    cin>>c;
    cout<<"Enjoy:) ";
    return 0;
}