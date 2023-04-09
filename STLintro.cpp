#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    v.push_back(40);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.insert(v.begin(), 5);
    v.insert(v.end(), 50);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << v.size();

    cout << endl;

    if (v.empty())
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }
}
