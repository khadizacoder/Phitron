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
        for(int &i:a) cin >> i;

        bool ok = true;
        for(int i = 0; i < n-1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                ll x = a[i] - (a[i + 1] - 1);

                if (a[i] - x < 1)
                {
                    ok = false;
                    break;
                }

                a[i] -= x;
                a[i + 1] += x;
            }
        }
        
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}