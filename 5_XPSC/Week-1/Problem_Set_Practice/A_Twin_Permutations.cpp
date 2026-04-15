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
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end());

        int val = n;
        vector<int> b(n);

        for(int i = 0; i < n; i++)
        {
            int idx = a[i].second;
            b[idx] = val;
            val--;
        }
        
        for(int x : b)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}