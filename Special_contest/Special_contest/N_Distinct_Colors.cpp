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
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        int mx = a[1];
        for(int i = 1; i <= n; i++)
            mx = max(mx, a[i]);
        cout << mx << endl;
    }
    
    return 0;
}