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
        ll n; cin >> n;
        vector<ll>a(n);
        for(auto &i:a) cin >> i;

        ll G1 = 0, G2 = 0;
        for(int i = 0; i < n; i+=2)
        {
            G1 = __gcd(G1, a[i]);
        }

        for(int i = 1; i < n; i+=2)
        {
            G2 = __gcd(G2, a[i]);
        }

        ll ans = 0;
        bool ok = true;
        for(int i = 1; i < n; i+=2)
        {
            if(a[i] % G1 == 0)
            {
                ok = false;
                break;
            }
        }

        if(ok) ans = G1;
        else{
            ok = true;
            for(int i = 0; i < n; i+=2)
            {
                if(a[i] % G2 == 0)
                {
                    ok = false;
                    break;
                }
            }

            if(ok) ans = G2;
        }

        cout << ans << nl;
    }

    return 0;
}