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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int candi = 0;
        for (int i = 0; i < n; i++)
        {
            // if (a[i] == x)
            //     candi = a[i];
            // if (a[i] > x)
            // {
                if (a[i] % x == 0)
                {
                    candi = max(candi, a[i]);
                }
            // }
        }
        cout << candi << nl;
    }
    return 0;
}