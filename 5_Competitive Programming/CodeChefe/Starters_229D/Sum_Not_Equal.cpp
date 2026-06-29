// #include <bits/stdc++.h>
// #define ll long long int
// #define ld long double
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define nl '\n'
// #define yes cout << "Yes\n"
// #define no cout << "No\n"
// #define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;

// int main()
// {
//     fastIO();

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//         int mn = min(100, n);
//         int x = -1, y = -1, z = -1;
//         bool ok = false;

//         for (int i = 0; i < mn && !ok; i++)
//         {
//             for (int j = i + 1; j < mn && !ok; j++)
//             {
//                 for (int k = j + 1; k < mn && !ok; k++)
//                 {
//                     if (a[i] + a[j] != a[k])
//                     {
//                         x = i + 1;
//                         y = j + 1;
//                         z = k + 1;
//                         ok = true;
//                     }
//                     else if (a[i] + a[k] != a[j])
//                     {
//                         x = i + 1;
//                         y = k + 1;
//                         z = j + 1;
//                         ok = true;
//                     }
//                     else if (a[j] + a[k] != a[i])
//                     {
//                         x = j + 1;
//                         y = k + 1;
//                         z = i + 1;
//                         ok = true;
//                     }
//                 }
//             }
//         }

//         if (!ok)
//             cout << -1 << nl;
//         else
//             cout << x << " " << y << " " << z << nl;
//     }

//     return 0;
// }




#include <bits/stdc++.h>
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<int, int>> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back({a[i], i + 1});
        }

        sort(b.begin(), b.end());

        if (b[0].first == 0 && b[n - 1].first == 0)
            cout << -1 << nl;
        else
        {
            if (b[0].first + b[1].first != b[n - 1].first)
            {
                cout << b[0].second << " " << b[1].second << " " << b[n - 1].second << nl;
            }
            else if (b[0].first + b[n - 1].first != b[1].first)
            {
                cout << b[0].second << " " << b[n - 1].second << " " << b[1].second << nl;
            }
            else if (b[n-1].first + b[1].first != b[0].first)
            {
                cout << b[n-1].second << " " << b[1].second << " " << b[0].second << nl;
            }
            else
                cout << -1 << nl;
        }
    }

    return 0;
}