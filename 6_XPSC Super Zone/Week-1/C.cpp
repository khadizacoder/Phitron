// Problem link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

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

    int n, x, y; cin >> n >> x >> y;

    ll first = min(x,y);
    if(n == 1)
    {
        cout << first << nl;
        return 0;
    }

    auto ok = [&](ll mid)
    {
        ll extra = mid - first;
        ll copy = 1 + (extra / x) + (extra / y);
        return copy >= n;
    };

    ll l = 0, r = 2e9, mid, ans;
    while(l <= r)
    {
        mid = l + (r - l)/ 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << nl;

    return 0;
}