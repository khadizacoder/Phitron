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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
            cin >> i;

        // vector<int> sufMax(n);
        // sufMax[n-1] = a[n-1];
        // for(int i = n - 2; i >= 0; i--)
        // {
        //     sufMax[i] = max(a[i],sufMax[i+1]);
        // }

        priority_queue<ll> pq;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            pq.push(a[i]);
            pq.push(a[i]);
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }

        cout << ans << nl;
    }

    return 0;
}