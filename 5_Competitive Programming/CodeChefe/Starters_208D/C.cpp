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
        int n, x, k; cin >> n >> x >> k;
        vector<int> a(n);
        for(auto &i:a) cin >> i;

        sort(rall(a));
        for(int i = 0; i < k; i++)
        {
            a[i] = 0;
            x+=100;
        }

        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > x) ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}