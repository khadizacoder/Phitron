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
//         int n, m;
//         cin >> n >> m;

//         vector<int> a(n), b(m);
//         for(int &i : a) cin >> i;
//         for(int &i : b) cin >> i;

//         int cnt = 0;
//         for(int j = 0; j < m; j++)
//         {
//             for(int i = 0; i < n; i++)
//             {
//                 if(a[i] > b[j]) cnt++;
//             }
//         }
//         cout << cnt << nl;
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
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        sort(a.begin(), a.end());
        int ans = 0;
        for(auto x : b)
        {
            int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
            ans+=(n-pos);
        }

        cout << ans << nl;
    }

    return 0;
}