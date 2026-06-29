#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        map<int, int> mp;
        for(auto val : a)
            mp[val]++;

        int cnt = 0;
        for(auto [val, freq] : mp)
        {
            auto it = val-1;
            if(mp[it] > mp[val])
            {
                cnt+=0;
            }
            else
            {
                int v = mp[val] - mp[it];
                cnt+=v;
            }
        }
        cout << cnt << nl;
    }
    return 0;
}