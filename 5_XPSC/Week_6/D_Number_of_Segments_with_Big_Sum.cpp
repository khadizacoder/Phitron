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

    ll n, s; cin >> n >> s;
    vector<ll>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 0, sum = 0, ans = 0;
    while(r < n)
    {
        sum+=a[r];

        while(sum >= s && l <= r)
        {
            ans+=n-r;
            sum-=a[l];
            l++;
        }

        r++;
    }
    cout << ans << nl;

    return 0;
}