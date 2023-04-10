#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class item
{
private:
    string name;
    float price;
    int qut;

public:
    item() {}
    item(string n, float p, int q)
    {
        name = n;
        price = p;
        qut = q;
    }
    friend ostream &operator<<(ostream &out, item &i);
    friend ofstream &operator<<(ofstream &out, item &i);
    friend ifstream &operator>>(ifstream &in, item &i);
};
ostream &operator<<(ostream &out, item &i)
{
    out << i.name << " " << i.price << " " << i.qut << endl;
    return out;
}

ofstream &operator<<(ofstream &out, item &i)
{
    out << i.name << " " << i.price << " " << i.qut << endl;
    return out;
}

ifstream &operator>>(ifstream &in, item &i)
{
    in >> i.name >> i.price >> i.qut;
    return in;
}

int main()
{
    // vector<int> v means int v[];
    // vector<int *> means int *v[];
    // vector<item *> v means list *v;
    vector<item *> v;
    int n;
    string name;
    float price;
    int quantity;
    cout << "Enter How Many Items You want to add";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter name, price anf quantity:  ";
        cin >> name >> price >> quantity;

        v.push_back(new item(name, price, quantity));
    }

    ofstream out("STltrying.txt", ios::app);
    vector<item *>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        out << **itr;
    }

    out.close();

    item im;
    ifstream in("STLtrying.txt");
    for (int i = 0; i < 4; i++)
    {
        in >> im;
        cout << im;
    }
    in.close();

    return 0;
}