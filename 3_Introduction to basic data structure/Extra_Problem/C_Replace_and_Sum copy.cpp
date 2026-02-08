
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;
        
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        // 2nd operation :
        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
                a[i] = b[i];
        }

        // 1st operation :
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] < a[i + 1])
                a[i] = a[i + 1];
        }

        // Prefix sum :
        for (int i = 1; i < n; i++)
            a[i] += a[i - 1];

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            if(l == 0) cout << a[r] << " ";
            else cout << a[r] - a[l-1] << " ";
        }
        cout << endl;
    }
    return 0;
}