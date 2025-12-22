#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
    Student mim(3, 8, 4.6);
    Student *p = &mim;
    return p;
}

int main()
{
    Student *p = fun();
    cout << "Roll -> " << p->roll << "\nClass -> " << p->cls << "\nGPA -> " << p->gpa << endl;

    return 0;
}