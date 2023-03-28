#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int size;

class info
{
  private:
  string name;
  long int enumb, phonenum;

  public:
//   info(string n=0,int e=0,int p=0)
//   {
//     name=n;
//     enumb=e;
//     phonenum=p;
//   }

    void set(string n,long int e,long int p)
    {
        name=n;
        enumb=e;
        phonenum=p;
    }

  string getname()
  {
    return name;
  }
  int getenum()
  {
    return enumb;
  }
  int getpnum()
  {
    return phonenum;
  }

  info()
  {
        for (int i = 0; i < size; i++)
    {
        char n[50];
        long int enumm,p;
        cout<<"Enter name: ";
        cin>>n;
        cout<<"Enter enum: ";
        cin>>enumm;
        cout<<"Enter pnmu: ";
        cin>>p;
        set(n,enumm,p); 
   }
  }
};


int main()
{
        cout<<"Enter Size:  ";
        cin>>size;
    ofstream ou("testfile.txt", ios::trunc);
    info in[size];

    
    for (int i = 0; i < size; i++)
    {
        ou<<"Name= "<<in[i].getname()<<"\n"
            <<"Enrolment Number: "<<in[i].getenum()<<"\n"
            <<"Phone Number: "<<in[i].getpnum()<<"\n"<<endl;
    }

    ou.close();
}
