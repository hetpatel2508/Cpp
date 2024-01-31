#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> v1;
    // stack<int> s;
    stack<int> s;
    list<int> v2={1,2,3,4,5,6};
    list<pair<int,int>> vp1={ {5,4} , {25,8} , {44,15} ,{65,91} , {25,56}  };

    v1.emplace_back(1);
    v1.emplace_back(2);
    v1.emplace_back(3);
    v1.emplace_back(4);
    
    for(auto i : v1)
    {
        cout<< i <<" ";
    }
    cout<<endl;

    v1.push_front(69);
    
    for(auto i : v1)
    {
        cout<< i <<" ";
    }
    cout<<endl;
    

    v1.pop_front();
    
    for(auto i : v1)
    {
        cout<< i <<" ";
    }
    cout<<endl;

    s.push(1);
    s.push(2);
    s.push(3);
    
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    priority_queue<int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(2);
    pq.push(8);
    pq.push(4);

    pq.pop();
    
    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    //+ all of the vector functions
}