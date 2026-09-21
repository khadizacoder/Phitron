// Problem link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
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

    int m, n; cin >> m >> n;
    vector<tuple<int,int,int>> a(n);
    for(int i = 0; i < n; i++)
    {
        int t, z, y; cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for(int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, full, remining, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            full = (mid / total);
            remining = mid % total;
            curr = (full * z) + min(z, (remining / t));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if(!has)
        {
            for(int i = 0; i < n; i++)
                can[i] = may[i];
        }

        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;
    while(l <= r)
    {
        mid = l + (r-l) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout << ans << nl;
    for(auto val : can)
        cout << val << " ";
    cout << nl;

    return 0;
}