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
        ll n; cin >> n;
        vector<ll>a(n);
        vector<ll>b(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) 
        {
            cin >> b[i];
        }

        ll mx_sum = 0, mx_char = 0;
        for(int i = 0; i < n; i++)
        {
            ll mx = max(a[i], b[i]);
            ll mn = min(a[i], b[i]);

            mx_sum+=mx;
            mx_char = max(mx_char, mn);
        }

        cout << mx_sum + mx_char << nl;
    }

    return 0;
}