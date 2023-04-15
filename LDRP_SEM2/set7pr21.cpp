// Design three classes STUDENT, EXAM and RESULT. The STUDENT class has 
// data members namely rollno, name. EXAM is created by inheriting STUDENT. 
// EXAM class adds data members representing the marks scored in six subjects. 
// Derive RESULT from EXAM and has its own data member total_marks. Write a 
// program to model this relationship

#include<iostream>
using namespace std;

class STUDENT
{
private:
int rollno;
string name;
public:
STUDENT(int r,string n)
{
    rollno=r;
    name=n;
}
int getr()
{
    return rollno;
}
string getn()
{
    return name;
}
};

class EXAM:public STUDENT
{
private:
int s1,s2,s3,s4,s5,s6;

public:
EXAM(int r,string n,int a,int b,int c,int d,int e,int f):STUDENT(r,n)
{
    s1=a;
    s2=b;
    s3=c;
    s4=d;
    s5=e;
    s6=f;
}
int get1()
{
    return s1;
}
int get2()
{
    return s2;
}
int get3()
{
    return s3;
}
int get4()
{
    return s4;
}
int get5()
{
    return s5;
}
int get6()
{
    return s6;
}
};

class RESULT:public EXAM
{
    private:
    int total_marks;
    public:
    RESULT(int r,string n,int a,int b,int c,int d,int e,int f):EXAM(r,n,a,b,c,d,e,f)
    {
        total_marks=a+b+c+d+e+f;
    }
    
    int gettm()
{
    return total_marks;
}
};

int main()
{
    RESULT r1(273,"Patel Het Rajeshkumar",72,55,85,70,65,80);
    cout<<"Details Of Students: "<<endl;
    cout<<"Name: "<<r1.getn()<<endl<<"Roll No: "<<r1.getr()<<endl<<"Marks in Subjects, \n"<<"FOP: "<<r1.get1()<<"\nEP: "<<r1.get2()<<"\nMaths: "<<r1.get3()<<"\nECE: "<<r1.get4()<<"\nEG: "<<r1.get5()<<"\nES: "<<r1.get6()<<endl;
    
}