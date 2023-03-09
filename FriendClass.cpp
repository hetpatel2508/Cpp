/*normal situation ma jo class ne bahar private&proteced variable use karva hoy to getlen&setlen function 
bnava pade but friend use karva thi je te friend function ma dairect private&proteced variable access
kari sakay*/


#include<iostream>
using namespace std;

class cube;

class ract
{
    private:  int bre;
    protected:  int hig;
    public:  int len;

    friend cube;

};


class cube
{
public:
ract r1;

void sett(int l,int b,int h)
{
    r1.len=l;
    r1.bre=b;
    r1.hig=h;
}
int vol()
{  
    return r1.len*r1.bre*r1.hig;

}
};

int main()
{
    cube c1;
    c1.sett(2,4,6);
    cout<<"VolumeOfCube= "<<c1.vol();
    return 0;
}