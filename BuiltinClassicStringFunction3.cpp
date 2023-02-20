#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a="welcome";
char b[15];
b[7]='\0';                  //while coping string b(size of a)=NULL; must for output
a.copy(b,a.length());       //used to copy string
cout<<a<<endl;
cout<<b<<endl;


string c="hetrajeshkumarpatel";         //to find string from front as per element
cout<<c.find("rajesh")<<endl;
cout<<c.find('k')<<endl;

cout<<c.rfind("rajesh")<<endl;         //to find string from back as per element
cout<<c.rfind('k')<<endl;

string d="helloworld";

cout<<d.find_first_of('l')<<endl;    // agad thi je pello l avse eno element no. batavse
cout<<d.find_last_of('l')<<endl;        // pacad thi je pello l avse eno element no. batavse

cout<<d.find_first_of('l',4)<<endl;      // 4th element thi je pello l avse eno element no. batavse
cout<<d.find_first_of("lo")<<endl;      

string e="programming";

cout<<e.substr(3)<<endl;            //(Elementnu.  ,till this number) ne string print tase
cout<<e.substr(3,4)<<endl;

string f="het",g="patel",h="het";

cout<<f.compare(g)<<endl;          //used to compare two string
cout<<f.compare(h)<<endl;

//string operator part

/*1*/string i="holiday";
cout<<a.at(2)<<endl;
cout<<a[2]<<endl;

/*2*/
string j=f+" "+g;       //f="het"+" "+"patel"=het patel
cout<<j<<endl;

/*3*/
cout<<i.front()<<endl;      //first element type karse
cout<<i.back()<<endl;           //last element type karse

    return 0;
}