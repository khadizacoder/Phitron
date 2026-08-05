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

// bool cmd(pair<int,int> a, pair<int,int> b)
// {
//     if(a.first != b.first)
//     {
//         return a.first > b.first;
//     }

//     return a.second < b.second;
// }

// int main()
// {
//     fastIO();

//     int t; cin >> t;
//     while(t--)
//     {
//         int n; cin >> n;
//         vector<pair<int,int>> a;

//         for(int i = 1; i <= n; i++)
//         {
//             int scor = __gcd(i, n);
//             a.push_back({scor, i});
//         }

//         sort(all(a), cmd);
//         for(auto &v : a) cout << v.second << " ";
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

        vector<pair<int,int>> a;
        for(int i = 1; i <= n; i++)
        {
            int scor = __gcd(i, n);
            a.push_back({scor, i});
        }

        sort(all(a), [](auto a, auto b){
            if(a.first != b.first)
            {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        for(auto v : a) cout << v.second << " ";
        cout << nl;
    }

    return 0;
}