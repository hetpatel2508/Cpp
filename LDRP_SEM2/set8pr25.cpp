// Create a class called LIST with two pure virtual function store ()
// and retrieve ().To store a value call store and to retrieve call 
// retrieve  function. Derive two classes stack and queue and override 
// store and retrieve class. 

#include<iostream>
using namespace std;

class LIST
{
private:

int item_number;
string item_name;
public:
void setn(int j)
{
item_number=j;
}
void setname(string n)
{
item_name=n;
}
int getn()
{
return item_number;
}
string getname()
{
    return item_name;
}
virtual void store(int j,string n)
{
    cout<<":)";
}
virtual void retrieve()
{
    cout<<":((";
}
};

class STACK: public LIST
{
    public:
void store(int j,string n)
{
    setn(j);
    setname(n);
}
void retrieve()
{
    cout<<getn()<<"."<<getname()<<endl;
}
};

class QUEUE: public LIST
{
    public:
void store(int j,string n)
{
    setn(j);
    setname(n);
}
void retrieve()
{
    cout<<getn()<<"."<<getname()<<"  ";
}
};

int main()
{
    int n1;
    int n2;
    int item;
    string name;
    cout<<"Enter total stack items: ";
    cin>>n1;
    STACK s[n1];
    for(int i=0;i<n1;i++)
    {
        cout<<"item no.=";
        cin>>item;
        cout<<"name=";
        cin>>name;
        s[i].store(item,name);
    }
    cout<<"Enter total queue items: ";
    cin>>n2;
    QUEUE q[n2];
    for(int i=0;i<n1;i++)
    {
        cout<<"item no.=";
        cin>>item;
        cout<<"name=";
        cin>>name;
        q[i].store(item,name);
    }
    cout<<"Output for stack: "<<endl;
    for(int i=0;i<n1;i++)
    {
        s[i].retrieve();
    }
    cout<<"output for queue: "<<endl;
    for(int i=0;i<n1;i++)
    {
        q[i].retrieve();
    }
}