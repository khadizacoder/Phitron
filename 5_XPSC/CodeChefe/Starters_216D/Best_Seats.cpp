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
        for(auto &i:a) cin >> i;

        int mn = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            mn = min(mn, a[i] + a[i-1]);
        }

        cout << mn << nl;
    }

    return 0;
}