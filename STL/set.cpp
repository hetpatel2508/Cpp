#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s1;

    s1.insert(2);
    s1.insert(1);
    s1.insert(4);
    s1.insert(3);
    s1.insert(2);

    // s1.erase(3);
    s1.erase(s1.find(3));

        /* code */
        for(auto i : s1)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    
}