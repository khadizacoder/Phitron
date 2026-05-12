// Problem link : https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int l = 0, r = 0;
    ll ans = 0;
    while(l < n && r < m)
    {
        int cur = a[l], cnt1 = 0, cnt2 = 0;
        while(l < n && cur == a[l])
        {
            cnt1++;
            l++;
        }

        while(cur > b[r])
        {
            r++;
        }

        while(r < m && cur == b[r])
        {
            cnt2++;
            r++;
        }

        ans+= (1ll * cnt1 * cnt2);
    }

    cout << ans << nl;

    return 0;
}