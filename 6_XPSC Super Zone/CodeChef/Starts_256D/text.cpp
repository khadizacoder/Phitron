#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool ok = true;
        while (ok)
        {
            ok = false;
            for (int i = 0; i < n - 1; i++)
            {
                // যদি বামের সংখ্যা ডানের চেয়ে বড় হয় এবং পার্থক্য ১ এর চেয়ে বেশি হয়
                if (a[i] > a[i + 1] && abs(a[i + 1] - a[i]) > 1)
                {
                    swap(a[i], a[i + 1]);
                    ok = true;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << nl;
    }

    return 0;
}