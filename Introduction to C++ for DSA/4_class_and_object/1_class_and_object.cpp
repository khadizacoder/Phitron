#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a, b;
    // a.roll = 1;
    // a.gpa = 4.5;

    // char tmp[100] = "Khadiza";
    // strcpy(a.name, tmp);

    //* Name spach chara input nibo

    // cin >> a.name >> a.roll >> a.gpa;
    // cin >> b.name >> b.roll >> b.gpa;

     //* Name space soho input nebo
    
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    // getchar();
    cin.ignore();

    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}