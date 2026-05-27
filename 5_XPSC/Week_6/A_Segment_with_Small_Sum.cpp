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

    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;

    ll l = 0, r = 0, ans = 0, sum = 0;
    while(r < n)
    {
        sum+=a[r];

        while(sum > x && l <= r)
        {
            sum-=a[l];
            l++;
        }

        if(sum <= x)
            ans = max(ans, (r - l + 1));

        r++;
    }
    cout << ans << nl;

    return 0;
}