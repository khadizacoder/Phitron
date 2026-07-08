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

//     int n; cin >> n;
//     vector<int> a(n);
//     for(auto &i : a) cin >> i;
//     sort(a.begin(), a.end());

//     int q; cin >> q;
//     while(q--)
//     {
//         int key; cin >> key;
//         ll ans = 0, l = 0, r = n-1, m;
//         while(l <= r)
//         {
//             m = l + (r-l)/2;
//             if(key >= a[m])
//                 ans = m+1;

//             if(key >= a[m]) l = m+1;
//             else r = m-1;
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

    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());

    int q; cin >> q;
    while(q--)
    {
        int key; cin >> key;
        auto it = upper_bound(a.begin(), a.end(), key);
        cout << it - a.begin() << nl;
    }

    return 0;
}