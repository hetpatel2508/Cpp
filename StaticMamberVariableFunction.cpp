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

    static int  gett()
    {
        return count;
    }

};


int test::count=0;


int main()
{
    test t1,t2,t3;
    cout<<t1.gett();
    return 0;
}