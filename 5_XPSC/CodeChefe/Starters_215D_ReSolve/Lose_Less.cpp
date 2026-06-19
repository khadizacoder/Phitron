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
//         int m, n; cin >> m >> n;

//         if(m >= n)
//         {
//             cout << m - n << nl;
//         }
//         else{
//             int d = n - m;
//             if(d%2 == 0)
//             {
//                 cout << 0 << nl;
//             }
//             else {
//                 cout << 1 << nl;
//             }
//         }
//     }

//     return 0;
// }


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
//         int m, n; 
//         cin >> m >> n;

//         int ans = m;
//         for(int i = 0; i <= m; i++)
//         {
//             for(int j = 0; j <= m; j++)
//             {
//                 for(int k = 0; k <= m; k++)
//                 {
//                     if(i+j+k == m && 3*i + j == n)
//                     {
//                         ans = min(ans, k);
//                     }
//                 }
//             }
//         }
//         cout << ans << nl;
//     }

//     return 0;
// }



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
        int m, n; 
        cin >> m >> n;

        int ans = m;
        for(int i = 0; i <= m; i++)
        {
            for(int j = 0; i+j <= m; j++)
            {
                int l = m - i - j;
                if(3*i + j == n)
                {
                    ans = min(ans, l);
                }
            }
        }
        if(ans < 0)
            cout << 0 << nl;
        else cout << ans << nl;
    }

    return 0;
}