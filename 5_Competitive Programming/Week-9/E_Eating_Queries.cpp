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
        int n, q; cin >> n >> q;
        vector<int> a(n);
        ll sum = 0;
        for(int &i : a) {cin >> i; sum+=i; }
        sort(a.begin(), a.end());

        while(q--)
        {
            int key; cin >> key;

            if(key > sum)
            {
                cout << -1 << nl;
                continue;
            }

            ll l = 0, r = n-1, ans = 0, cnt = 0;
            while(l <= r)
            {
                if(ans >= key) break;
                if(ans < key)
                {
                    ans+=a[r];
                    cnt++;
                    r--;
                }
            }

            // if(ans >= key)
                cout << cnt << nl;
            // else cout << -1 << nl;
            // cout << cnt << " -> " << ans << nl;
        }
    }

    return 0;
}