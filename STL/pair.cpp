#include <bits/stdc++.h>
using namespace std;

int main()
{
   pair<int,int> p1={25,8};
   cout<<p1.first<<"  "<<p1.second<<endl;

   pair<int , pair<int,int>> p2={25 , {8,2003} };
   cout<<p2.first<<"  "<<p2.second.first<<"  "<<p2.second.second<<endl;

    pair<int,int> p_arr[]={ {5,4} , {25,8} , {44,15} ,{65,91} , {25,56} };
    for(int ele=0;ele<(sizeof(p_arr)/sizeof(p_arr[0]));ele++)
    {
        cout<<p_arr[ele].first<<"  "<<p_arr[ele].second<<"       ";
    }
}