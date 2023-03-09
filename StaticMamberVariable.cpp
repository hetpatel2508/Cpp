#include<iostream>
using namespace std;

class test
{
    public:
    
    static int count;

    test()
    {
    count++;    
    }
};

int test::count=0;

int main()
{
    test t1,t2,t3;
    cout<<t1.count<<" "<<t2.count<<" "<<t3.count<<endl;
    cout<<test::count;
}