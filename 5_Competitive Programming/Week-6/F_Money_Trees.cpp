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
        vector<ll> a(n), h(n);
        for(ll &i : a) cin >> i; 
        for(ll &i : h) cin >> i; 

        int l = 0, r = 1, len = 0;
        ll sum = a[0];
        if(sum <= k) len = 1;

        while(r < n)
        {
            if(h[r - 1] % h[r] == 0)
                sum+=a[r];
            else{
                l = r;
                sum = a[r];
                if(sum <= k) len = max(len, 1);
                r++;
                continue;
            }

            while(l <= r && sum > k)
            {
                sum-=a[l];
                l++;
            }

            len = max(len, r-l+1);
            r++;
        }
        cout << len << nl;
    }

    return 0;
}