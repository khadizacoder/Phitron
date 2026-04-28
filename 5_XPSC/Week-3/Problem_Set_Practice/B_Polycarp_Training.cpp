// Problem Link: https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int count = 0, day = 1;
    for (int i = 0; i < n; i++)
    {
        if (day <= a[i])
        {
            count++;
            day++;
        }
    }
    cout << count << '\n';

    return 0;
}