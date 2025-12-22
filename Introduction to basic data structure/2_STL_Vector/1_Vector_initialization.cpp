#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; //* Type 1

    // vector<int> v(5); //* Type 2

    // vector<int> v(10, 1); //* Type 3 => 10 element ar value 1 hoay jabe

    //*Different way
    // int n; cin >> n;
    // vector<int> v(n, 10);

    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }


    // vector<int> v(10, 5);
    // vector<int> v2(v); //* Type 4
    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }


    //* Array thake shob gula element vector a nawar upay

    int a[5] = {1, 4, 3, 5, 2};
    vector<int> v(a, a + 5);

    //*Different way
    // vector<int> v = {1,2,3,4,5};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v.size();

    return 0;
}