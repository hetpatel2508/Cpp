
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50};

    vector<int>::iterator itr;

    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }

    //or

    cout<<endl;

    for(int i:v)
    {
        cout<<i<<"  ";
    }

    //both are iterators
    
}