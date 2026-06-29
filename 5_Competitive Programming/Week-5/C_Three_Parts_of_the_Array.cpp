// Problem link: https://codeforces.com/problemset/problem/1006/C

// #include <bits/stdc++.h>
// #define ll long long int
// #define all(x) x.begin(), x.end()
// #define nl '\n'
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     vector<ll> pre(n, 0);
//     vector<ll> suff(n, 0);

//     pre[0] = a[0];
//     for (int i = 1; i < n; i++)
//         pre[i] = pre[i-1] + a[i];

//     suff[n-1] = a[n-1];
//     for (int i = n - 2; i >= 0; i--)
//         suff[i] = suff[i + 1] + a[i];

//     int val = pre[n-1] / 2;
//     ll ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int l = i + 1;

//         while (l < n)
//         {
//             if (pre[i] == suff[l] && pre[i] <= val)
//             {
//                 ans = max(ans, pre[i]);
//             }
//             l++;
//         }
//     }
//     cout << ans << nl;

//     return 0;
// }

// Better Solution
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = n - 1, lsum = 0, rsum = 0, ans = 0;
    while (l <= r)
    {
        if (lsum < rsum)
        {
            lsum += a[l];
            l++;
        }
        else
        {
            rsum += a[r];
            r--;
        }
        if (lsum == rsum)
        {
            ans = max(ans, lsum);
        }
    }

    cout << ans << nl;
    return 0;
}