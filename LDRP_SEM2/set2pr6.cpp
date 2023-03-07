#include<iostream>
using namespace std;

class larg
{
    public:
    int a[5];
    
    
void seta()
{
for (int i=0;i<5;i++)
{
    cout<<"enter number:";
    cin>>a[i];
}
}


int maximum()
{
int maxi=a[0];
for(int i=0;i<5;i++)
{
    if(a[i]>maxi)
    {
        maxi=a[i];
    }
}
return maxi;
}
};

int main()
{
    larg m1;
    m1.seta();
    int maxx=m1.maximum();
    // seta();
    
    cout<<"max= "<<maxx;
    return 0;
}
 