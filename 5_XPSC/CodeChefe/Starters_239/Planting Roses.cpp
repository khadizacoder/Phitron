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

    ll t; cin >> t;
    while(t--)
    {
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(n);

        ll total = 0;
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
            total+=a[i];
        }

        ll v = m - (m / (k + 1));
        cout << min(total, v) << nl;
    }

    return 0;
}