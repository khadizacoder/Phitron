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


bool good(ll m, ll n, ll h, vector<ll> a, vector<ll> c)
{
    ll cnt = 0;
    for(int i = 0; i < n; i++)
        cnt = min(cnt+ (1 + (m - 1)/ c[i]) * a[i], h);
    
    return cnt >= h;
}

void solve(int tt)
{
    ll n, h; cin >> n >> h;
    vector<ll> a(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    ll l = 0, r = 1;
    while(!good(r, n, h, a, c))
        r*=2;

    while(l+1 < r)
    {
        ll m = l + (r-1) / 2;
        
        if(good(m, n, h, a, c))
            r = m;
        else l = m;
    }
    cout << r << nl;
}

int main()
{
    fastIO();

    int tc = 1; cin >> tc;
    for(int tt = 1; tt <= tc; tt++)
    {
        solve(tt);
    }

    return 0;
}