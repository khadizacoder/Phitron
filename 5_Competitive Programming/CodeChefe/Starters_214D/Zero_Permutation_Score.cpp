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
//         int n; cin >> n;

//         int ans = 0;
//         for(int i = 1; i < n; i+=2)
//         {
//             for(int j = i + 1; j < n-1; j++)
//             {
//                 ans++;
//             }
//         }

//         cout << ans << nl;
//     }

//     return 0;
// }

int main()
{
    fastIO();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        int k = (n-1)/2;

        if(n%2 == 0)
        {
            cout << 1LL * (k * k) << nl;
        }
        else{

            cout << 1LL * k * (k-1) << nl;
        }
    }
}