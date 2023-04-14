//  Create a class named ‘SHOW’ having 2 data members Production_House_Name and 
// Show_name. Extend 2 classes viz. ‘MOVIE’ and ‘SERIES’ from the class ‘SHOW’. 
// Class MOVIE has a data member named Movie_hours and SERIES has a data member 
// Number_of_Episodes. Create object of MOVIE and SERIES. Create necessary member 
// function in each class. 

#include<iostream>
using namespace std;

class SHOW
{
private:
string Production_House_Name;
string Show_name;

public:
SHOW(string ph,string sn)
{
Production_House_Name=ph;
Show_name=sn;
}
string getpn()
{
    return Production_House_Name;
}
string getsn()
{
    return Show_name;
}
};

class MOVIE:public SHOW
{
private:
float Movie_hours;

public:
MOVIE(string p,string s,float mh):SHOW(p,s)
{
Movie_hours=mh;
}
float getmh()
{
    return Movie_hours;
}
};

class SERIES:public SHOW
{
private:
int Number_of_Episodes;

public:
SERIES(string p,string s,int ne):SHOW(p,s)
{
    Number_of_Episodes=ne;
}
int getne()
{
    return Number_of_Episodes;
}
};

int main()
{
MOVIE m1("Reliance Entertainment","Sooryavanshi",2.45);
SERIES s1("Prime Videos","Farzi",8);

cout<<"Movie Name: "<<m1.getsn()<<"  "<<"Created By: "<<m1.getpn()<<"  "<<"Duration: "<<m1.getmh()<<endl;
cout<<endl;
cout<<"Series Name: "<<s1.getsn()<<"  "<<"Created By: "<<s1.getpn()<<"  "<<"Total Episodes: "<<s1.getne()<<endl;
}