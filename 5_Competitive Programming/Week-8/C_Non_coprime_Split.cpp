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
        int x, y; cin >> x >> y;

        bool ok = false;
        while(x <= y)
        {
            int k = (x + 1) / 2;
            if(k + k >= x && k + k <= y)
            {
                int GCD = __gcd(k, k);
                if(GCD != 1)
                {
                    cout << k << " " << k << nl;
                    ok = true;
                    break;
                }
                else x+=1;
            }
            else break;
        }
        if(!ok) cout << -1 << nl;

        // x, y same and odd hole problem
    }

    return 0;
}