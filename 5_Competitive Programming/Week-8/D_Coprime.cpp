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
    vector<vector<int>> a(11);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (__gcd(i, j) == 1) a[i].push_back(j);
        }
    }

    for(int i = 1; i < 4; i++)
    {
        cerr << i << " -> ";
        for(int j = 0 ; j < a[i].size(); j++)
        {
            cerr << a[i][j] << " ";
        }
        cerr << nl;
    }

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     vector<int> arr(n + 1);
    //     for (int i = 1; i <= n; i++) cin >> arr[i];

    //     for(int i = 1; i <= 1000; i++)
    //     {
            
    //     }
    // }

    return 0;
}