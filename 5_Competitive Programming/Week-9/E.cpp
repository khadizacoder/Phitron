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
        vector<int> a(n), prefix(n+1);
        ll sum = 0;
        for(int &i : a) {cin >> i; sum+=i; }
        sort(a.rbegin(), a.rend());

        for(int i = 1; i <= n; i++)
            prefix[i] = prefix[i-1] + a[i-1];

        while(q--)
        {
            int key; cin >> key;

            auto it = lower_bound(prefix.begin(), prefix.end(), key);
            
            if(it != prefix.end())
                cout << it - prefix.begin() << nl;
            else cout << -1 << nl;
        }
    }

    return 0;
}