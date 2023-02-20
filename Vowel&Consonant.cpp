#include<iostream>
#include<cstring>


using namespace std;
int main()
{
string a;
string::iterator i;
cout<<"enter string: ";
getline(cin,a);
int v=0,c=0,w=0,s=0;
for(i=a.begin();i!=a.end();i++)
{
if(*i=='a'){v++;}
else if(*i=='e'){v++;}
else if(*i=='i'){v++;}
else if(*i=='o'){v++;}
else if(*i=='u'){v++;}
else if(*i=='A'){v++;}
else if(*i=='E'){v++;}
else if(*i=='I'){v++;}      
else if(*i=='O'){v++;}
else if(*i=='U'){v++;}
else if(*i==' '){s++;}
else{c++;}
}
cout<<"Vowel:"<<v<<endl;
cout<<"Consonant:"<<c<<endl;
cout<<"Space:"<<s<<endl;


    return 0;
}