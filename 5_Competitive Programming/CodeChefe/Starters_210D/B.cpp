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

// int main()
// {
//     fastIO();

//     int t; cin >> t;
//     while(t--)
//     {
//         int n, x; cin >> n >> x;

//         int cost = x*((n-x)+1);
//         int cnt = 0;
//         for(int i = 1; i <= n; i++)
//         {
//             if(i >= x) cnt+=i;
//         }

//         if(cnt == 0)
//             cout << 0 << nl;
//         else
//             cout << abs(cnt-cost) << nl;
//     }

//     return 0;
// }

int main()
{
    fastIO();

    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;

        int ans = 0;
        for(int i = x; i <= n; i++)
        {
            ans+=(i-x);
        }

        cout << ans << nl;

    }

    return 0;
}