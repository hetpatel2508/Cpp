#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2={1,2,3,4,5,6};
    vector<pair<int,int>> vp1={ {5,4} , {25,8} , {44,15} ,{65,91} , {25,56}  };

    v1.emplace_back(1);
    v1.emplace_back(2);
    v1.emplace_back(3);
    v1.emplace_back(4);
    
    for(vector<int>::iterator it=v1.begin() ; it<v1.end() ; it++)
    {
        cout<<*(it)<<"  ";
    }

    cout<<endl;

    for(auto i=v1.begin() ; i<v1.end() ; i++)
    {
        cout<<*(i)<<"  ";
    }

    cout<<endl;

    // v1.erase(v1.begin()+1);
    // v1.erase(v1.begin()+1,v1.begin()+3);

    // v1.insert(v1.end(),5);
    // v1.insert(v1.end(),2,5);

    // cout<<v1.size()<<endl;

    // v1.pop_back();

    // v1.clear();

    for(auto i : v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=0;i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(auto i : v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i : vp1)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}