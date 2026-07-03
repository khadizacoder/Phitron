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
        int l, r; cin >> l >> r;

        bool ok = false;
        for(int n = l; n <= r; n++)
        {
            for(int i = 2; i*i <= n; i++)
            {
                if(n%i == 0)
                {
                    cout << i << " " << n-i << nl;
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        if(!ok) cout << -1 << nl;
    }

    return 0;
}