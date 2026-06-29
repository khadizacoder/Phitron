// Problem Link: https://codeforces.com/problemset/problem/1430/C

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

    while (t--)
    {
        int n;
        cin >> n;

        multiset<ll> ms;
        vector<pair<ll, ll>> ans;

        for (int i = 1; i <= n; i++)
            ms.insert(i);

        while (ms.size() > 1)
        {
            auto it1 = prev(ms.end());
            int a = *it1;
            ms.erase(it1);

            auto it2 = prev(ms.end());
            int b = *it2;
            ms.erase(it2);

            ll val = (a + b + 1) / 2;
            ms.insert(val);
            ans.push_back({a, b});
        }

        cout << *ms.begin() << '\n';
        for (auto x : ans)
            cout << x.first << " " << x.second << '\n';
    }

    return 0;
}