// Problem link : https://codeforces.com/problemset/status?my=on

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
        int n, w;
        cin >> n >> w;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());

        vector<bool> usedVal(n, false);
        int ans = 0;
        int idx = 0;

        while(idx < n)
        {
            int width = w;
            for(int i = 0; i < n; i++)
            {
                if(!usedVal[i] && a[i] <= width)
                {
                    width-=a[i];
                    usedVal[i]=true;
                    idx++;
                }
            }
            ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}