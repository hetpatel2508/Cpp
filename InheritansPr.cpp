#include<iostream>
using namespace std;

class emp
{
    public:
    string name;
    int age;
    emp(string s,int a)
    {
        name=s;
        age=a;
    }
};

class fullemp : public emp
{
public:
int salary;
fullemp(string s,int a,int sa):emp(s,a)
{
    salary=sa;
}

};

class partemp : public emp
{
public:
int sph;
partemp(string s,int a,int se):emp(s,a)
{
    sph=se;
}
};

int main()
{
    fullemp f1({"het"},18,15000);
    partemp p1({"shubh"},20,20);

        cout<<"name="<<f1.name<<" "<<"age="<<f1.age<<" "<<"salary="<<f1.salary<<endl;
        cout<<"name="<<p1.name<<" "<<"age="<<p1.age<<" "<<"Salary per hour="<<p1.sph;
    return 0;
}