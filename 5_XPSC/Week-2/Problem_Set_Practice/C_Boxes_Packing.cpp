// Problem link: https://codeforces.com/problemset/problem/903/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    int mx = INT_MIN;
    for(auto x : mp)
    {
        mx = max(mx, x.second);
    }
    cout << mx << '\n';
    return 0;
}