// Problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F

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

    string t, p; cin >> t >> p;

    int n = t.size();
    int m = p.size();
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    auto ok = [&](int mid)
    {
        vector<bool> bad(n+1);
        for(int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        bool found = false;
        for(int i = 0; i < n; i++)
        {
            if(t[i] == p[j] && !bad[i+1])
            {
                j++;
            }

            if(j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = n, mid, ans = 0;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << nl;

    return 0;
}