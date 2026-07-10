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
        int minsum, maxsum; cin >> minsum >> maxsum;
        vector<int> a(n);
        for(auto &i:a) cin >> i;

        sort(a.begin(), a.end());
        int totalPair = 0;

        for(int i = 0; i < n; i++)
        {
            int lval = minsum - a[i];
            int rval = maxsum - a[i];

            auto lit = lower_bound(a.begin()+i+1, a.end(), lval);
            auto rit = upper_bound(a.begin()+i+1, a.end(), rval);

            int sz = rit - lit;
            totalPair+=sz;
        }
        cout << totalPair << nl;
    }

    return 0;
}