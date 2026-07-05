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
        ll n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        map<int,int> idx;
        for(int i = 0; i < n; i++)
            idx[a[i]] = max(idx[a[i]], i+1); // 1 base index

        vector<int> uniq;
        for(auto [x,y] : idx)
            uniq.push_back(x);

        int ans = -1;
        for(int i = 0; i < uniq.size(); i++)
        {
            for(int j = 0; j < uniq.size(); j++)
            {
                int gc = __gcd(uniq[i], uniq[j]);
                if(gc == 1)
                    ans = max(ans, idx[uniq[i]] + idx[uniq[j]]);
            }
        }
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
//     vector<vector<int>> a(11);

//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             if (__gcd(i, j) == 1) a[i].push_back(j);
//         }
//     }

//     for(int i = 1; i < 4; i++)
//     {
//         cerr << i << " -> ";
//         for(int j = 0 ; j < a[i].size(); j++)
//         {
//             cerr << a[i][j] << " ";
//         }
//         cerr << nl;
//     }

//     // int t;
//     // cin >> t;
//     // while (t--)
//     // {
//     //     int n;
//     //     cin >> n;
//     //     vector<int> arr(n + 1);
//     //     for (int i = 1; i <= n; i++) cin >> arr[i];

//     //     for(int i = 1; i <= 1000; i++)
//     //     {
            
//     //     }
//     // }

//     return 0;
// }


