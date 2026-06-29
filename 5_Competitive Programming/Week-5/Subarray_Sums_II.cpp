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

    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<ll> pre(n + 1);
    for(int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1]+a[i-1];
    }

    ll cnt = 0;
    map<ll,ll> mp;
    mp[0] = 1;

    for(int r = 1; r <= n; r++)
    {
        ll y = pre[r] - x;
        if(mp.find(y) != mp.end()) cnt+=mp[y];
        mp[pre[r]]++;
    }
    cout << cnt << nl;

    return 0;
}