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
//     vector<int>a(n);
//     for(auto &i: a) cin >> i;

//     int q; cin >> q;
//     while(q--)
//     {
//         int key; cin >> key;
//         auto leftit = lower_bound(a.begin(), a.end(), key);
//         auto rightit = upper_bound(a.begin(), a.end(), key);

//         if(leftit == a.begin())
//             cout << "X" << " ";
//         else 
//         {
//             leftit--;
//             cout << *leftit << " ";
//         }

//         if(rightit == a.end())
//             cout << "X" << nl;
//         else cout << *rightit << nl;
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
    for(int &i:a) cin >> i;

    int q; cin >> q;
    while(q--)
    {
        int key; cin >> key;
        int ans1 = -1, ans2 = -1;
        int l = 0, r = n-1;

        while(l <= r)
        {
            int mid = (l+r)/2;

            if(a[mid] < key)
            {
                ans1 = a[mid];
                l = mid+1;
            }
            else r = mid-1;
        }

        l = 0, r = n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;

            if(a[mid] > key)
            {
                ans2 = a[mid];
                r = mid-1;
            }
            else l = mid+1;
        }

        if(ans1 == -1) cout << "X ";
        else cout << ans1 << " ";

        if(ans2 == -1) cout << "X\n";
        else cout << ans2 << "\n";
    }

    return 0;
}