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
//     for(auto &i:a) cin >> i;

//     vector<ll> pref(n);
//     pref[0] = a[0];
//     for(int i = 1; i < n; i++)
//         pref[i] = pref[i-1] + a[i];

//     ll ans = 0;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j <= n; j++)
//         {
//             int sum = pref[j] - pref[i];
//             if(sum % n == 0)
//                 ans++;
//         }
//     }

//     cout << ans << nl;
    
//     return 0;
// }

//* Optimize Way

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

    vector<ll> cnt(n, 0);
    cnt[0] = 1;
    
    ll ans = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum+=a[i];
        int rem = sum % n;

        if(rem < 0)
            rem+=n;

        ans+=cnt[rem];
        cnt[rem]++;
    }
    cout << ans << nl;

    return 0;
}