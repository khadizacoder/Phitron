#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = INT_MAX;
        int not_valid = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                mn = min(mn, a[i] % k);
            }
            else if (a[i] < k)
            {
                not_valid = not_valid + 1;
            }
        }

        if (not_valid == n)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << mn << endl;
        }
    }

    return 0;
}