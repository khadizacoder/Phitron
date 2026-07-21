
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
//         for(int i = 0; i < n; i++)
//             cin >> a[i];

//         int cnt1 = 0, cnt2 = 0;
//         for(int i = 0; i < n; i++)
//         {
//             if(i%2 == 0)
//             {
//                 if(a[i] % 2 == 0) cnt1++;
//             }
//             else{
//                 if(a[i] % 2 != 0) cnt1++;
//             }
//         }
//         for(int i = 0; i < n; i++)
//         {
//             if(i%2 == 0)
//             {
//                 if(a[i] % 2 != 0) cnt2++;
//             }
//             else{
//                 if(a[i] % 2 == 0) cnt2++;
//             }
//         }
//         cout << min(cnt1, cnt2) << nl;
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
        for(int i = 0; i < n; i++) cin >> a[i];

        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(a[i] % 2 == 0) cnt1++;
                else cnt2++;
            }
            else {
                if(a[i] % 2 == 0) cnt2++;
                else cnt1++;
            }
        }
        cout << min(cnt1, cnt2) << nl;
    }

    return 0;
}