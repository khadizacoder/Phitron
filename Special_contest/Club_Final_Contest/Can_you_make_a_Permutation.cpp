#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        vector<int> v(n+1, 0);
        for (int i = 1; i <= n; i++)
        {
            if(arr[i] > 0 && arr[i] < n + 1)
                v[arr[i]]++;
        }

        int nai = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 0)
                nai++;
        }

        if (nai <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}