#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;

        set<int> teacher;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            teacher.insert(x);
        }

        while (q--)
        {
            int david;
            cin >> david;

            auto it = teacher.lower_bound(david);
            if (it == teacher.begin())
            {
                cout << *it - 1 << nl;
            }
            else if (it == teacher.end())
            {
                auto it = teacher.end();
                it--;
                
                cout << n - *it << nl;
            }
            else
            {
                int r = *it;
                it--;
                int l = *it;

                cout << (r - l) / 2 << nl;
            }
        }
    }
    return 0;
}