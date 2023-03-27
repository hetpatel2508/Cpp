#include<iostream>
using namespace std;

namespace first
{
    class book 
    {
        public:
        int len,bre;
        void setlenbre(int l,int b)
        {
            len=l;
            bre=b;
        }
        void output()
        {
            cout<<"Length= "<<len<<" "<<"breadth="<<bre<<endl;
        }
    };
}


namespace second
{
    class book 
    {
        public:
        int side,hig;
        void setlenbre(int l,int b)
        {
            side=l;
            hig=b;
        }
        void output()
        {
            cout<<"Side= "<<side<<" "<<"hight="<<hig<<endl;
        }
    };
}

using namespace first;

int main()
{
    book b1;
    b1.setlenbre(4,5);
    b1.output();

    second::book b2;
    b2.setlenbre(2,3);
    b2.output();
}