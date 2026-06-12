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
        int a, b, x; cin >> a >> b >> x;
        
        ll cnt = 0;
        ll ab = abs(a-b);
        ll ans = ab;

        while(a != 0 || b != 0)
        {
            if(a > b) 
            {
                a = a / x;
            }
            else {
                b = b / x;
            }
            cnt++;

            ll val = abs(a-b);
            ans = min(ans, val + cnt);
        }

        cout << ans << nl;
    }

    return 0;
}