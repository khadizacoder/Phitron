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

        vector<int> cpy = a;
        int mn = 0;
        for(int i = 0; i < n-1; i++)
        {
            int val = cpy[i] + (2*cpy[i+1]);
            cpy[i+1] = val;
        }

        for(int i = n-1; i > 0; i--)
        {
            int val = 2*a[i];
            a[i - 1] = val + a[i-1];
        }

        cout << cpy[n-1] << " " << a[0] << nl;
    }

    return 0;
}