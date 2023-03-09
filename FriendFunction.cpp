#include<iostream>
using namespace std;

class ract
{
    private:
    int bre;
    protected:
    int hig;
    public:
    int len;

    friend int area();

    void getbre(int b)
    {
        bre=b;
    }
    void gethig(int h)
    {
        hig=h;
    }


    int brre()
    {
        return bre;
    }
    int leen()
    {
        return len;
    }
    int hiig()
    {
        return hig;
    }

    ract(int l=0,int b=0,int h=0)
    {
        len=l;
        getbre(b);
        gethig(h);
    }
};

int area(int l,int b,int h)
{
    ract t;
    t.len=l;
    t.getbre(b);
    t.gethig(h);
    return (t.leen())*(t.brre())*(t.hiig());
}

int main()
{
    cout<<"area= "<<area(2,3,4);
    return 0;
}