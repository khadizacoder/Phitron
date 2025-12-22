#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int math_mark;
    int english_mark;
    Student(string name, int math_mark, int english_mark)
    {
        this->name = name;
        this->math_mark = math_mark;
        this->english_mark = english_mark;
    }

    void total()
    {
        cout << "Total mark -> " << name << " = " << math_mark + english_mark << endl;
    }
};
int main()
{
    Student Khadiza("Khadiza", 89, 56);
    Khadiza.total();

    Student Habiba("Habiba", 89, 56);
    Habiba.total();

    return 0;
}