#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Constructor
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    // Student mim;
    // mim.cls = 2;
    // mim.gpa = 3.4;
    // mim.roll = 21;

    //* input nawa
    // cin >> mim.roll >> mim.cls >> mim.gpa ;

    //* Constructor

    Student mim(12, 7, 4.3);
    Student dim(2, 7, 4.94);

    cout << "Roll -> " << mim.roll << "\tClass -> " << mim.cls << "\tGPA -> " << mim.gpa << endl;
    cout << "Roll -> " << dim.roll << "\tClass -> " << dim.cls << "\tGPA -> " << dim.gpa << endl;

    return 0; 
}