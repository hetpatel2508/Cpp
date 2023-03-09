#include <iostream>
using namespace std;

int enno = 1;

class divv
{
private:
    int roll;
    string name;
    int enrol;

public:
    static int total;
    divv()
    {
        cout << "Enter name: ";
        cin >> name;

        roll = enno;

        enrol = enno;

        enno++;
        total++;
    }

    string getname()
    {
        return name;
    }

    int getroll()
    {
        return roll;
    }

    int geten()
    {
        return enrol;
    }
};

int divv::total = 0;

int main()
{
    int size;
    cout << "Entet total students= ";
    cin >> size;
    divv d[size];
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "NAME= " << d[i].getname() << "\n"
             << "ROLL NO.= " << d[i].getroll() << "\n"
             << "ENROLMENT NO.= 22BECE30" << d[i].geten() << "\n\n";
    }

    cout << "TOTAL=" << divv::total;
}