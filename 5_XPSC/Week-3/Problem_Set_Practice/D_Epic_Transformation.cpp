// Problem Link : https://codeforces.com/problemset/problem/1506/D

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        map<int,int> mp;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            mx = max(mx, mp[a[i]]);
        }

        int ans = 0;
        if(mx > n/2)
            ans = mx - (n - mx);
        else
            ans = n%2;
        cout << ans << "\n";
    }
    return 0;
}

// onno wey ta pore aber try korbo
