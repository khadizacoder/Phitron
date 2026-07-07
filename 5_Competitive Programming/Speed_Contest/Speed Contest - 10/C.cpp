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
        int n, m; cin >> n >> m;

        if(n > m)
        {
            cout << n-m << nl;
        }
        else{
            int x = m/n;
            int a = n*x;
            int b = (x+1) * n;
            cout << min(m-a, b-m) << nl;
        }
    }

    return 0;
}