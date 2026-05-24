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
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        vector<int> pre(n + 1, INT_MAX), suff(n+2, INT_MIN);
        for(int i = 1; i <= n; i++)
        {
            pre[i] = min(pre[i-1], a[i]);
        }

        for(int i = n; i >= 1; i--)
        {
            suff[i] = max(suff[i+1], a[i]);
        }

        for(int i = 1; i <= n; i++)
        {
            if(a[i] == pre[i] || a[i] == suff[i])
                cout << 1;
            else cout << 0;
        }

        cout << nl;
    }

    return 0;
}