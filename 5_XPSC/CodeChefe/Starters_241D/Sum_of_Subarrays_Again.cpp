#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll INF = (ll)1e18;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int &x : a)
        cin >> x;

    ll ans = 0;

    // Step 1: total sum of all subarrays
    ll pref = 0;
    for(int i = 0; i < n; i++)
    {
        pref += a[i];
        ans += pref;
    }

    // Step 2: contribution from positive elements
    // using classic subarray contribution formula
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= 0) continue;

        ll L = i + 1;
        ll R = n - i;

        ans += (ll)a[i] * L * R;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}