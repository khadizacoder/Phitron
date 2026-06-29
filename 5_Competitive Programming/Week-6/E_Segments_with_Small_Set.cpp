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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        mp[a[r]]++;

        if (mp.size() <= k)
            ans+=r-l+1;
        else
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if(mp[a[l]] == 0)
                    mp.erase(a[l]);
                l++;
            }
            if (mp.size() <= k)
                ans+=r-l+1;
        }

        r++;
    }
    cout << ans << nl;

    return 0;
}