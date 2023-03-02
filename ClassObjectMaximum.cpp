#include<iostream>
using namespace std;
class check
{
    public: //private:
    int a;
    int b;
    // public:
    // check(int x,int y)
    // {
    //     a=x;
    //     b=y;
    // }
    
    int maxx()
    {
    return a>b?a:b;
    }
};
int main()
{
    int x,y;
    cin>>x>>y;
    // check t(a,b);
    check t;
    t.a=x;
    t.b=y;
    cout<<t.maxx();
    return 0;
}