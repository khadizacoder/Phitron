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

        int ans = INT_MAX;
        for(int i = 1; i <= n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                if(a[i] == a[j])
                {
                    int v = i + (n-j);
                    ans = min(ans, v);
                }
                
            }
        }
        if(ans == INT_MAX)
            cout << -1 << nl;
        else cout << ans - 1 << nl;
    }

    return 0;
}