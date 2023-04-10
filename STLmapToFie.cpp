#include<iostream>
#include<map>
#include<fstream>

using namespace std;


ofstream & operator << (ofstream &out, map<int,string> temp)
{
map<int,string>::iterator itr;
for(itr=temp.begin();itr!=temp.end();itr++)
{
    out<<itr->first<<" "<<itr->second<<endl;
}
return out;
}

int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"Het"));
    m.insert(pair<int,string>(2,"Dev"));
    m.insert(pair<int,string>(3,"Deep"));
    m.insert(pair<int,string>(4,"smit"));
    m.insert(pair<int,string>(5,"sneh"));
    m.insert(pair<int,string>(6,"dhruv"));
    m.insert(pair<int,string>(7,"nisarg"));
    m.insert(pair<int,string>(8,"salin"));
    m.insert(pair<int,string>(9,"jainam"));
    m.insert(pair<int,string>(10,"harsh"));
    m.insert(pair<int,string>(11,"prince"));
    m.insert(pair<int,string>(12,"daksh"));

    ofstream out("tesing.txt",ios::app);
    out<<m;
    out.close();

    return 0;

}