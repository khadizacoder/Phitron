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

int main()
{
    //* Constructor

    Student *mim = new Student(12, 7, 4.3);
    Student *dim = new Student(2, 7, 4.94);

    cout << "Roll -> " << mim->roll << "\tClass -> " << mim->cls << "\tGPA -> " << mim->gpa << endl;
    cout << "Roll -> " << dim->roll << "\tClass -> " << dim->cls << "\tGPA -> " << dim->gpa << endl;

    return 0;
}