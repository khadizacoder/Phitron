#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks, eng_marks;
};
bool cmp(Student l, Student r)
{
    int mark_l = l.math_marks + l.eng_marks;
    int mark_r = r.math_marks + r.eng_marks;
    if (mark_l > mark_r)
    {
        return true;
    }
    else if (mark_l < mark_r)
    {
        return false;
    }
    else{
        if(l.id < r.id)
        {
            return true;
        }
        else{
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}