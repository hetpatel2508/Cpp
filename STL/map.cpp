#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<int,int> m; 
   m.emplace(1,25);
   m.emplace(3,2003);
   m.emplace(5,5);
   m.emplace(2,8);
   m.emplace(4,4);

   m.insert({6,2003});
   
   m.erase(4);

   for(auto i : m)
   {
    cout<<i.first<<"  "<<i.second<<"  "<<endl; 
   } 
   
   //or

   cout<<endl<<endl<<endl;

   auto start=m.begin();

   while(start!=m.end())
   {
    cout<<start->first<<"  "<<start->second<<endl;
    start++;
   }
   cout<<endl;
}