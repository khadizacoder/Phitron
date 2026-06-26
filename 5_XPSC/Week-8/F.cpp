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

    int n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        long long ans = 1;

        while (b > 0)
        {
            if (b & 1)
                ans *= a;

            a *= a;
            b >>= 1;
        }

        cout << ans << '\n';
    }

    return 0;
}