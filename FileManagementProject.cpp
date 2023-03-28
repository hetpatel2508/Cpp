#include<iostream>
#include<fstream>
using namespace std;

class list
{
private:
string name;
int price;
int quantity;

public:
// list(string n=0,int p=0,int q=0)
// {
// name=n;
// price=p;
// quantity=q;
// }
void set(string n=0,int p=0,int q=0)
{
name=n;
price=p;
quantity=q;
}

friend ostream & operator <<(ostream &out, list &l);

friend ofstream & operator <<(ofstream &ou, list &l);

friend ifstream & operator >> (ifstream &in, list &l);

};

ifstream & operator >> (ifstream &in, list &l)
{
    in>>l.name>>l.price>>l.quantity;
    return in;
}

ostream & operator <<(ostream &out, list &l)
{
// out<<l.name<<endl<<l.price<<endl<<l.quantity<<endl;
out<<"Name= "<<l.name<<"  "<<"Price= "<<l.price<<"  "<<"Quantity= "<<l.quantity<<endl;
return out;
}

ofstream & operator <<(ofstream &ou, list &l)
{
ou<<l.name<<" "<<l.price<<" "<<l.quantity<<" "<<endl;
return ou;
}


int main()
{
    int nu;
    cout<<"Enter Total item: ";
    cin>>nu;

    string n;
    int pr;
    int qu;

    list l[nu];

    cout<<"Enter Items--->  "<<endl;
    for(int i=0;i<nu;i++)
    {
        cout<<"\nEnter Item Name: ";
        cin>>n;
        // getline(cin,n);

        cout<<"Enter Price: ";
        cin>>pr;

        cout<<"Enter Quantity: ";
        cin>>qu;

        l[i].set(n,pr,qu);
    }


    ofstream out("trytry.txt",ios::trunc);

        for(int i=0;i<nu;i++)
        {
                out<<l[i]<<endl;
        }
    
    out.close();

    list temp;

    ifstream in("trytry.txt");

      for(int i=0;i<nu;i++)
        {
        in>>temp;
        cout<<"("<<i+1<<")"<<" "<<temp<<endl;
        }

    in.close();
    
    return 0;
}