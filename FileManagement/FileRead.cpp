#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int ennum;
    int t;
    // ofstream o("testfile.txt");
    // o<<50;
    // o.close();

    ifstream in("testfile.txt");
    in>>t;
    cout<<"Entered Number = "<<t<<endl;
    in.close();
    return 0;
}