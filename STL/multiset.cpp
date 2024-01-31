#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms1;

    ms1.insert(2);
    ms1.insert(1);
    ms1.insert(4);
    ms1.insert(3);
    ms1.insert(2);
    ms1.insert(2);

    ms1.erase(2); 
    // ms1.erase(ms1.find(2),ms1.find(2)+1);

        /* code */
        for(auto i : ms1)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    
}