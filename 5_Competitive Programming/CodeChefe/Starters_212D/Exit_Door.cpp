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
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int ans  = 0;
        for(int i = n; i >= 1; i--)
        {
            // cout << i << " ";
            for(int j = 1; j < n-1; j++)
            {
                if(a[i] > a[j-1] && a[i] > a[j+1]) ans++;
                // cout << a[j] << " ";
            }
        }

        cout << ans << nl;
    }

    return 0;
}