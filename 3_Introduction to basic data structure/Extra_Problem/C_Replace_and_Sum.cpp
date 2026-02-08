#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        // for(int i = 0; i < n; i++)
        // {
        //     if(b[i] > a[i])
        //         a[i] = b[i];
        // }

        // for(int i = n - 2; i >= 0; i--)
        // {
        //     if(a[i] < a[i + 1])
        //         a[i] = a[i + 1];
        // }

        for (int i = 0; i < n; i++)
        {
            a[i] = max(a[i], b[i]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            a[i] = max(a[i], a[i + 1]);
        }

        // prifix
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;

            l--, r--;

            if (l == 0)
                cout << a[r] << " ";
            else
                cout << a[r] - a[l - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}