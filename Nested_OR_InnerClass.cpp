#include <iostream>
using namespace std;

class cube
{
public:
    int hig;

    class ract
    {
    public:
        int len;
        int bre;
    };

    ract r;
    int vol()
    {
        return hig * r.len * r.bre;
    }
};

int main()
{
    cube c1;
    c1.r.len = 2;
    c1.r.bre = 3;
    c1.hig = 4;
    cout << c1.vol();
}