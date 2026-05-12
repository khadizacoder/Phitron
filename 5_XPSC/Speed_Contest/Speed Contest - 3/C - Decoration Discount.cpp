#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> cpy = a;
        sort(cpy.begin(), cpy.end());

        int ans1 = cpy[0] + cpy[1];
        int ans2 = INT_MAX;

        for(int i = 0; i < n - 1; i++)
        {
            int val = a[i] + (a[i+1] / 2);
            ans2 = min(ans2, val);
        }

        if(ans1 < ans2)
            cout << ans1 << nl;
        else cout << ans2 << nl;
    }
    return 0;
}