/*jo koi private pointer koi private value no address store karto hoy to class(class &xyz) pan
ej same address show karto hovo joia atle deep constructor vapray 6*/

#include<iostream>
using namespace std;

class check
{
    private:
    int value;
    int *ptr;

    public:

    //jo constructor ma pointer ave to deep constructor use tay
    check(int v)
    {
        value=v;
        ptr=new int[value];
    }
    check(check &a)
    {
        value=a.value;
        ptr=new int[value];
    }


    int showvalue()
    {
        return value;
    }
    void showptr()
    {
        for(int i=0;i<value;i++)
        {
            cout<<ptr<<" ";
        }
    }
};

int main()
{
    check a(4);
    check b(a);
cout<<b.showvalue()<<endl;
b.showptr();
    return 0;
}