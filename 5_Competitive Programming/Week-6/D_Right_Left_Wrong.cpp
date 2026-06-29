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
        ll n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        string s; cin >> s;

        vector<ll> pref(n);
        pref[0] = a[0];
        for(int i = 1; i < n; i++)
            pref[i] = pref[i-1] + a[i];

        ll l = 0, r = n-1, lidx = 0, ridx = 0, ans = 0;
        while(l < r)
        {
            while(s[l] != 'L' && l < n)
            {
                l++;
            }

            while(s[r] != 'R' && r >= 0)
            {
                r--;
            }
            
            if(l < r)
            {
                if(l == 0) ans+=pref[r];
                else ans += pref[r] - pref[l-1];
                
                l++; r--;
            }
        }

        cout << ans << nl;
    }

    return 0;
}