#include<iostream>
using namespace std;
int main()
{
int n,i=1;
cout<<"Enter number: ";
cin>>n;
for(;i<=10;i++)
{
    cout<<n<<" "
        <<i<<" "
        <<n*i<<" \n";
}
while(i<=10)
{
        cout<<n<<" "
        <<i<<" "
        <<n*i<<" \n";
        i++;
}
do
{
        cout<<n<<" "
        <<i<<" "
        <<n*i<<" \n";
        i++;
}while(i<=10);
    return 0;
}