#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;

        ll v1 = (x * x * x * x) + (4 * (y * y));
        ll v2 = (4 * (x * x)) * y;

        if(v1 == v2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}