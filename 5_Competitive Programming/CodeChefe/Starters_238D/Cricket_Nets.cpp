#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 20)
            cout << n * 10 << nl;
        else
        {
            int val = n - 20;
            cout << (val * 5) / 2 + (20 * 10) << nl;
        }
    }
    return 0;
}