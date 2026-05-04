// Problem Link: https://codeforces.com/problemset/problem/1793/C

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

    while (t--)
    {
        int n;
        cin >> n;

        set<pair<int, int>> s;        // (index, value)
        multiset<pair<int, int>> ms;  // (value, index)

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert({i, x});
            ms.insert({x, i});
        }

        int first_idx = 0, last_idx = n - 1;

        while (!s.empty())
        {
            auto sleft = s.begin();
            auto sright = prev(s.end());

            auto mn = ms.begin();
            auto mx = prev(ms.end());

            if (sleft->second == mn->first)
            {
                ms.erase(ms.find({mn->first, mn->second}));
                s.erase(sleft);
                first_idx++;
            }
            else if (sleft->second == mx->first)
            {
                ms.erase(ms.find({mx->first, mx->second}));
                s.erase(sleft);
                first_idx++;
            }
            else if (sright->second == mn->first)
            {
                ms.erase(ms.find({mn->first, mn->second}));
                s.erase(sright);
                last_idx--;
            }
            else if (sright->second == mx->first)
            {
                ms.erase(ms.find({mx->first, mx->second}));
                s.erase(sright);
                last_idx--;
            }
            else
                break;
        }

        if (first_idx >= last_idx)
            cout << -1 << '\n';
        else
            cout << first_idx + 1 << " " << last_idx + 1 << '\n';
    }

    return 0;
}

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         int l = 0, r = n - 1;

//         while (l < r)
//         {
//             if (a[l] > a[r])
//             {
//                 cout << -1 << '\n';
//                 return 0;
//             }
//             if (a[l] == 1 || a[l] == n)
//                 l++;
//             else if (a[r] == 1 || a[r] == n)
//                 r--;
//             else
//                 break;
//         }

//         if (l >= r)
//             cout << -1 << '\n';
//         else
//             cout << l + 1 << " " << r + 1 << '\n';
//     }
// }