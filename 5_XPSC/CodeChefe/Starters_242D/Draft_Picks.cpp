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
        int n, k; cin >> n >> k;

        int ans = 0;
        bool ok = true;

        for(int i = k; i >= 1;)
        {
            if(ok)
            {
                ans+=i;
                i-=n;
            }
            else {
                i-=(n-1);
                if(i >= 1) ans+=i;
                i--;
            }
            ok = !ok;
        }
        cout << ans << nl;
    }

    return 0;
}