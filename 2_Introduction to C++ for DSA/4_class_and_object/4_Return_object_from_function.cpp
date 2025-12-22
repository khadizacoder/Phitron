#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student mim(12, 7, 4.37);
    return mim;
}
int main()
{
    //* Constructor

    Student mim = fun();

    cout << "Roll -> " << mim.roll << "\tClass -> " << mim.cls << "\tGPA -> " << mim.gpa << endl;

    return 0;
}