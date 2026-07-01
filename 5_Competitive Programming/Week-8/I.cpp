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

    int t; cin >> t;
    while(t--)
    {
        ll x, y;
        cin >> x >> y;

        if(y == 1)
        {
            cout << "NO\n";
            continue;
        }

        ll z = x*y;
        cout << "YES\n";
        cout << z << " " << x << " " << z+x << nl;
    }

    return 0;
}