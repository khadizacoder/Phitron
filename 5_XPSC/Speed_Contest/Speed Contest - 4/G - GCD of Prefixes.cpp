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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int &i : b)
            cin >> i;

        int gc = b[0];
        bool ok = true;

        for (int i = 1; i < n; i++)
        {
            if (b[i - 1] % b[i] != 0)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int x : b)
            {
                cout << x << " ";
            }
            cout << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }

    // int x= 4;
    // int y = 10;
    // cout << __gcd(x,y);

    return 0;
}


// int main()
// {
//     int tc = 1;
//     cin >> tc;
//     while (tc--)
//     {
//         int n;
//         cin >> n;
//         vector<int> b(n);
//         for (int i = 0; i < n; i++)
//             cin >> b[i];
//         int gc = b[0];
//         bool f = true;
//         for (int i = 0; i < n; i++)
//         {
//             int cur_gc = __gcd(gc, b[i]);
//             if (cur_gc != b[i])
//             {
//                 f = false;
//                 break;
//             }
//             else
//                 gc = cur_gc;
//         }
//         if (!f)
//             cout << "-1\n";
//         else
//         {
//             for (int i = 0; i < n; i++)
//                 cout << b[i] << " ";
//             cout << '\n';
//         }
//     }
//     return 0;
// }
