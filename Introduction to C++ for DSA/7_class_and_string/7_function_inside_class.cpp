#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {
        cout << "Hello " << name << endl;
    }
};
int main()
{
    Student khadiza("Khadiza", 12);

    cout << khadiza.name << " " << khadiza.roll << endl;
    khadiza.hello();

    Student Habiba("Habiba", 2);
    Habiba.hello();

    return 0;
}