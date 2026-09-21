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

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        // ll x = abs(a - b);

        // if (c <= x)
        //     cout << x << nl;
        // else
        // {
        //     if (x % 2 == 0)
        //     {
        //         cout << c + x << nl;
        //     }
        //     else
        //     {
        //         cout << c - x << nl;
        //     }
        //     if ((c - x) % 2 == 0) {
        //         cout << c + x << nl;
        //     } else {
        //         cout << c - x << nl;
        //     }
        // }

        ll x = abs(a - b);
        ll y = abs(a + c - b);
        ll ans = max(x,y);
        cout << ans << nl;

    }

    return 0;
}