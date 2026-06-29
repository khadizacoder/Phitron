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

    ll t; cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);

        ll currSum = 0;
        vector<ll> add(m, 0);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            currSum+=a[i];

            ll warp = m - a[i];
            if(warp < m)
                add[warp] -= m;
        }
        

        // ll mn = LLONG_MAX;
        // for(int k = 0; k < m; k++)
        // {
        //     ll sum = 0;

        //     for(int i = 0; i < n; i++)
        //     {
        //         sum+= (a[i] + k) % m;
        //     }

        //     mn = min(mn,sum);
        // }
        // cout << mn << nl;

        //* optimize

        ll ans = currSum;
        for(int k = 1; k < m; k++)
        {
            currSum+=n;
            currSum+=add[k];
            ans=min(ans,currSum);
        }
        cout << ans << nl;
    }

    return 0;
}