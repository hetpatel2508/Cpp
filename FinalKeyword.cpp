#include <iostream>
using namespace std;

class ract final
{
public:
    void fun()
    {
        cout << "Function of class ract";
    }
};

// class cube : public ract can't be inheritance because of final keyword
class cube
{
public:
    void fun()
    {
        cout << "Function of class cube";
    }
};

int main()
{
}