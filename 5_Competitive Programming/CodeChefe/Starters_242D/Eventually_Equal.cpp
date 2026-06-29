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

        if (a == b)
        {
            cout << 0 << nl;
            continue;
        }

        // ll cnt = 0;
        if (gcd(a, c) == gcd(b, c))
        {
           cout << 1 << nl;
           continue;
        }

        if (gcd(a, c+1) == gcd(b, c+1))
        {
            cout << 2 << nl;
            continue;
        }

        cout << 3 << nl;
    }

    return 0;
}