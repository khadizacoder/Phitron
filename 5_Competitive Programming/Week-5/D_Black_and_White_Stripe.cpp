// Topic: Two Pointers
// Problem Link: https://codeforces.com/problemset/problem/1690/D

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
        ll n, k;
        cin >> n >> k;

        string st;
        cin >> st;

        ll l = 0, r = 0, bl = 0, wh = 0;
        int ans = INT_MAX;
        while(r < n)
        {
            if(st[r] == 'B') bl++;
            else if(st[r] == 'W') wh++;

            if(r-l+1 == k)
            {
                int val = k - bl;
                ans = min(ans, val);

                if(st[l] == 'B') bl-=1;
                else wh-=1;
                l++;
            }
            r++;
        }
        cout << ans << nl;
    }
    return 0;
}