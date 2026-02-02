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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int totalMark = 0;
        for (int i = 0; i < n; i++)
            totalMark = totalMark + a[i];

        int sum = 50 * (n + 1);
        int ans = sum - totalMark;

        if (ans > 100)
            cout << -1 << endl;
        else if (ans <= 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
        
    }

    return 0;
}