#include<iostream>
#include<vector>

using namespace std;

class ract
{
    private:
    int len;
    int bre;
    public:
    ract(){}
    ract(int l,int b){len=l;bre=b;}
    void out()
    {
        cout<<"Length: "<<len<<"  "<<"Breath: "<<bre<<endl;
    }
};

int main()
{
vector <ract *> v;
int l,b;
int n;

v.push_back(new ract(10,20));
v.push_back(new ract(30,40));
v.push_back(new ract(50,60));

for(auto x: v)
{
x->out();
}
}