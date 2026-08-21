// Problem link: https://codeforces.com/problemset/problem/1201/C

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

    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto &i:a) cin >> i;

    auto ok = [&] (ll median)
    {
        ll cnt = 0;

        for(int i = (n/2); i < n; i++)
        {
            cnt += (a[i] < median ? (median - a[i]) : 0);
        }
        return cnt <= k;
    };

    sort(all(a));

    ll l = 1, r = 2e9, ans;
    // ll l = a[n / 2];
    // ll r = a[n / 2] + k;
    // ll ans = l;
    while(l <= r)
    {
        ll mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << ans << nl;

    return 0;
}