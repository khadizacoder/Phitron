#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls, marks;
};
int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].cls >> arr[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].marks << endl;
    }

    return 0;
}