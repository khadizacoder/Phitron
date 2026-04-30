#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 2)
        {
            cout << a[0] + a[1] << '\n';
        }
        else
        {
            int mn = INT_MAX;
            for (int i = 1; i < n; i++)
            {
                mn = min(mn, a[i - 1] + a[i]);
            }
            cout << mn << '\n';
        }
    }
    return 0;
}