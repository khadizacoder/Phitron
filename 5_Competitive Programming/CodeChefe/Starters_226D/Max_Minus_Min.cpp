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
        vector<ll> a(n);

        ll mx = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(auto &x : a)
            pq.push(x);

        ll ans = mx - pq.top();

        while(pq.top() * 2 <= mx)
        {
            ll mn = pq.top();
            pq.pop();
            pq.push(mn * 2);
            mx = max(mx, mn*2);
            ans = min(ans, mx - pq.top());
        }

        for(int i = 0; i < n; i++)
        {
            ll mn = pq.top();
            pq.pop();
            pq.push(mn*2);
            mx = max(mx, mn*2);
            ans = min(ans, mx - pq.top());
        }

        cout << ans << nl;
    }

    return 0;
}