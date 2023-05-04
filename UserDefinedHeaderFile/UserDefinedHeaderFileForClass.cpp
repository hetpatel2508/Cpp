#include<iostream>
#include "Demoheaderfile.h"
using namespace std;

int main()
{
    ract r1(2,3);
    cout<<"Length: "<<r1.getlen()<<endl;
    cout<<"Breadth: "<<r1.getbre()<<endl;
    cout<<"Area= "<<r1.area();
    return 0;
}