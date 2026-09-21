// Problem link: https://codeforces.com/problemset/problem/1352/C

#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
    
        auto ok = [&](int mid)
        {
            return (mid - (mid / n) >= k);
        };

        int l = 1, r = 2e9, mid, ans = 0;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid+1;
        }

        cout << ans << nl;
    }

    return 0;
}