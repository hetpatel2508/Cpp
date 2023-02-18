#include<iostream>
// #include<string.h>   
// or
#include<cstring>
using namespace std;
int main()
{
string a="hetpatel";
string b="urvishpatel";
string c="het";
string d="diya";

string e="babulal";
string f="dayalal";

cout<<a.append("Rajeshkumar")<<endl;        //end ma given string add karse

cout<<a.insert(3,"Rajeshkumar")<<endl;        // writen number thi given string add karse

cout<<b.replace(3,3,"shaileshbhai")<<endl;      // given number thi giver distance sudhi given string print ty

c.push_back('p');
c.push_back('a');                        //it will simply add a character at the end :(
c.push_back('t');
cout<<c<<endl; 


d.pop_back();                       //it wil erase last element of a string
cout<<d<<endl; 

e.swap(f);
cout<<e<<endl;                   //it will simply swap values of a string
cout<<f<<endl; 


    return 0;
}