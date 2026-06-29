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
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        map<int, vector<int>> mp;
        for(int i = 1; i <= n; i++)
        {
            int cur = a[i];
            int op = 0;

            while(cur > 0)
            {
                mp[cur].push_back(op);
                cur/=2;
                op++;
            }
        }

        int ans = INT_MAX;
        for(auto &[val, v]: mp)
        {
            if(v.size() == n)
            {
                int cnt = 0;
                for(auto x : v)
                {
                    cnt+=x;
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << nl;
    }

    return 0;
}