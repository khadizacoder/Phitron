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
        int n, k; cin >> n >> k;
        int sum = 0;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int val = a[i] + a[j] + (sum - a[i] - a[j])/2;
                if(val > k) ans++;
            }
        }
        cout << ans << nl;
    }

    return 0;
}