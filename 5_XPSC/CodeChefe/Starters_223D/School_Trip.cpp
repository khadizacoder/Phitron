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
        int n, x, k;
        cin >> n >> x >> k;

        int xlowval = (x / k) * k;
        int xheighval = xlowval + k;

        int ans = abs(x - xlowval);
        if(xheighval <= n)
            ans = min(ans, abs(xheighval - x));
            
        cout << ans << nl;
    }

    return 0;
}