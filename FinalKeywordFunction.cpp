#include<iostream>
using namespace std;

class ract 
{
public:
virtual void fun() final
{
cout<<"Function of class ract";
}
};

class cube: public ract
{
public:
// void fun()
// {
// cout<<"Function of class cube";
// }
/*here fun is final so everytime only final void fun will
be executed.....*/
};

int main()
{

}