

#include <bits/stdc++.h>
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<int, int>> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back({a[i], i + 1});
        }

        sort(b.begin(), b.end());

        if (b[0].first == 0 && b[n - 1].first == 0)
            cout << -1 << nl;
        else
        {
            if (b[0].first + b[1].first != b[n - 1].first)
            {
                cout << b[0].second << " " << b[1].second << " " << b[n - 1].second << nl;
            }
            else if (b[0].first + b[n - 1].first != b[1].first)
            {
                cout << b[0].second << " " << b[n - 1].second << " " << b[1].second << nl;
            }
            else if (b[n-1].first + b[1].first != b[0].first)
            {
                cout << b[n-1].second << " " << b[1].second << " " << b[0].second << nl;
            }
            else
                cout << -1 << nl;
        }
    }

    return 0;
}