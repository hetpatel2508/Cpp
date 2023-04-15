// Create a base class called SHAPE. Use this class to store two double type values. 
// Derive two specific classes called TRIANGLE and RECTANGLE from the base class. 
// Add to the base class, a member function getdata to initialize base class data members 
// and another member function display to compute and display the area of figures. Make 
// display a virtual function and redefine this function in the derived classes to suit their 
// requirements. Using these three classes design a program that will accept driven of a 
// TRINGLE or RECTANGLE interactively and display the area. 

#include<iostream>
using namespace std;

class SHAPE
{
    public:
    double len,bre,hig;
    virtual void getdata(double l=0,double b=0,double h=0)
    {
        len=l;
        bre=b;
        hig=h;
    }
    virtual void display()
    {
        cout<<":)";
    }
};

class TRIANGLE: public SHAPE
{
public:
void getdata(double b=0,double h=0)
{
    bre=b;
    hig=h;
}
void display()
{
    cout<<"Area Of Triangle: "<<((bre*hig)/2)<<endl;
}
};

class RECTANGLE: public SHAPE
{
    public:
void getdata(double l=0,double b=0)
{
    len=l;
    bre=b;
}
void display()
{
    cout<<"Area Of Rectangle: "<<(len*bre)<<endl;
}
    
};

int main()
{
    TRIANGLE t1;
    RECTANGLE r1;
    t1.getdata(2,5);
    r1.getdata(3,4);
    t1.display();
    r1.display();
}