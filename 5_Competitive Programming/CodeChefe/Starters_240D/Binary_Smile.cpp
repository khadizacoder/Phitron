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
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;

        vector<pair<ll,ll>> a, b;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == '1') a.push_back({s1[i], i});
            if(s2[i] == '1') b.push_back({s2[i], i});
        }

        if(a.size() != b.size())
        {
            cout << -1 << nl;
            continue;
        }

        ll ans = 0;

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i].second != b[i].second)
            {
                ans++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}