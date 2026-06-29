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
//         for(auto &i:a) cin >> i;
//         sort(all(a));

//         vector<int> ans(n);
//         int i = 0, j = n-1, idx = 0;

//         while(i <= j)
//         {
//             if(i <= j)
//             {
//                 ans[idx] = a[j];
//                 j--;
//                 idx++;
//             }

//             ans[idx] = a[i];
//             i++;
//             idx++;
//         }

//         for(auto x : ans) cout << x << " ";
//         cout << nl;
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
        int n; cin >> n;
        vector<int> a(n);

        int mx = 0;
        for(auto &i:a) 
        {
            cin >> i;
            mx = max(mx,i);
        }

        sort(a.begin(), a.end());
        bool skip = false;

        cout << mx << " ";
        for(auto x : a) 
        {
            if(x == mx && !skip) 
            {
                skip = true;
                continue;
            }
            else cout << x << " ";
        }
        cout << nl;
    }

    return 0;
}