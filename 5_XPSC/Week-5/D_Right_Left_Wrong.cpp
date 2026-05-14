// Problem link : https://codeforces.com/problemset/problem/2000/D

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

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
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        vector<ll> pre(n + 1, 0);
        for(int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + a[i];
        }

        ll ans = 0;
        int l = 0, r = n-1;

        while(l < r)
        {
            while(l < n && s[l] == 'R')
            {
                l++;
            }
            while(r >= 0 && s[r] == 'L')
            {
                r--;
            }
            if(l < r)
            {
                ans += pre[r + 1] - pre[l];
                l++; r--;
            }
        }
        cout << ans << nl;
    }
    return 0;
}