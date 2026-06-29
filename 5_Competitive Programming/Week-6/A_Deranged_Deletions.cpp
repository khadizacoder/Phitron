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
//         vector<int> b(n);
//         for(int &i : b) cin >> i;

//         vector<int> c = b;
//         sort(c.begin(), c.end());
        
//         int first = -1, second = -1;
//         bool flag = false;
//         for(int i = 0; i < n-1; i++)
//         {
//             if(b[i] > b[i+1])
//             {
//                 first = b[i];
//                 second = b[i+1];
//                 flag = true;
//                 break;
//             }
//         }

//         if(!flag) cout << "NO\n";
//         else cout << "YES\n" << 2 << nl << first << " " << second << nl;
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
        vector<int> b(n);
        for(int &i : b) cin >> i;

        vector<int> c = b;
        sort(c.begin(), c.end());

        vector<int> ans;
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(b[i] != c[i]){
                ans.push_back(b[i]);
            }
        }

        if(ans.size() < 2) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << ans.size() << nl;
            for(int v : ans) cout << v << " ";
            cout << nl;
        }
    }

    return 0;
}