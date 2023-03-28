#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream out("testfile.txt");
    out<<"Name: Het Patel"<<endl;
    out<<"E.number= 22BECE30273"<<endl;
    out<<"P.Num= 9265907918"<<endl;

    out.close();
}