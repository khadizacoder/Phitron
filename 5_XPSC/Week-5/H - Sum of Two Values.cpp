// Problem link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        int need = x - v;
        if(mp.count(need))
        {
            cout << mp[need] + 1 << " " << i+1;
            return 0;
        }
        mp[v] = i;
    }
    cout << "IMPOSSIBLE\n";
    
    return 0;
}

// int main()
// {
//     int n, x;
//     cin >> n >> x;

//     vector<int> a(n);
//     map<int,int> mp;
//     for(int i = 0; i < n; i++) cin >> a[i];

//     for(int i = 0; i < n; i++)
//     {
//         auto need = x - a[i];

//         if(mp.count(need))
//         {
//             cout << mp[need] + 1 << " " << i+1;
//             return 0;
//         }

//         mp[a[i]] = i;
//     }
//     cout << "IMPOSSIBLE\n";

//     return 0;
// }