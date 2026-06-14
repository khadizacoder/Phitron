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
        int sum = 0;

        for(int i = 0; i < n;i++)
        {
            cin >> a[i];
            sum+=a[i];
        }

        if(sum >= 0)
        {
            cout << 0 << nl;
            continue;
        }

        double x = abs(sum);
        // int ans = (x + n - 1) / n;
        double ans = ceil(x/n);
        cout << ans << nl;
    }

    return 0;
}


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

//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         vector<int> a(n);
//         int sum = 0;

//         for(int i = 0; i < n;i++)
//         {
//             cin >> a[i];
//             sum+=a[i];
//         }

//         if(sum >= 0)
//         {
//             cout << 0 << nl;
//             continue;
//         }

//         int x = abs(sum);
//         int ans = 0;
//         for(int i = 1; i <= x; i++)
//         {
//             if(i * n >= x)
//             {
//                 ans = i;
//                 break;
//             }
//         }
//         cout << ans << nl;
//     }

//     return 0;
// }
