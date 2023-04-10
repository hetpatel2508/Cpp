#include <iostream>
#include <vector>

using namespace std;

class ract
{
public:
    int len, bre;

    ract(int l, int b)
    {
        len = l;
        bre = b;
    }
    // friend bool operator
    friend bool operator>(ract r1, ract r2);
};

bool operator>(ract r1, ract r2)
{
    if (r1.len > r2.len)
    {
        return true;
    }

    else
    {
        if (r1.bre > r2.bre)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    ract r1(2, 3), r2(4, 5);

    if (r1 > r2)
    {
        cout << "r2 bigger";
    }
    else
    {
        cout << "r1 bigger";
    }
}