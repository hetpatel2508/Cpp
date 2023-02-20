#include<iostream>
#include<cstring>


using namespace std;
int main()
{
char a[50];
char b[50];
cout<<"enter string: ";
cin.getline(a,50);
strcpy(b,a);
strrev(a);

if(strcmp(a,b)==0)
{
    cout<<"palindrome";
}
else{
    cout<<"not a palindrome";
}

    return 0;
}