#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int mark;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 3;

        int mx = INT_MIN;
        Student max_student;

        for (int i = 0; i < n; i++)
        {

            Student a;
            cin >> a.id >> a.name >> a.section >> a.mark;

            if (a.mark > mx)
            {
                mx = a.mark;
                max_student = a;
            }
        }

        cout << max_student.id << " " << max_student.name << " " << max_student.section << " " << max_student.mark << endl;
    }

    return 0;
}
