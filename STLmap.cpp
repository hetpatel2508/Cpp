#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"Het"));
    m.insert(pair<int,string>(2,"Dev"));
    m.insert(pair<int,string>(3,"Deep"));
    m.insert(pair<int,string>(4,"smit"));
    m.insert(pair<int,string>(5,"sneh"));

    map<int,string>::iterator itr1;

    for(itr1=m.begin();itr1!=m.end();itr1++)
    {
        cout<<itr1->first<<" "<<itr1->second<<endl;
    }

cout<<endl<<endl;


    map<int,string>::iterator itr2;

    itr2=m.find(2);

    cout<<"Value is founded"<<endl;
    cout<<itr2->first<<"  "<<itr2->second<<endl;

int a;string b;
cout<<"enter key & value:"; 
cin>>a;
getline(cin,b);

m.insert(pair<int,string>(a,b));

map<int,string>::iterator itr3;

for(itr3=m.begin();itr3!=m.end();itr3++)
{
    cout<<itr3->first<<"  "<<itr3->second<<endl;
}

}
