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

    ll l, r;
    cin >> l >> r;

    // vector<pair<int,int>> ans;
    // while(l < r)
    // {
    //     int i = r-l;
    //     int j = r-l+1;
    //     ans.push_back({i, j});
    //     l++; r--;
    // }

    if (l != r) cout << "YES\n";
    else cout << "NO\n";

    // for(auto [a, b] : ans)
    // {
    //     cout << a << " " << b << nl;
    // }

    for(ll i = l; i < r; i+=2)
    {
        cout << i << " " << i+1 << nl;
    }

    return 0;
}