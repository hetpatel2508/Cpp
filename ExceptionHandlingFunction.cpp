#include <iostream>
using namespace std;

int display(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    int x, y, z;
    cout << "Enter x&y";
    cin >> x >> y;
    try
    {
        z = display(x, y);
        cout << "x/y= " << z;
    }
    catch (int e)
    {
        cout << "bcoz of y=0 now y will be changed to y=" << e << endl;
        cout << "x/y= " << x / e;
    }
}