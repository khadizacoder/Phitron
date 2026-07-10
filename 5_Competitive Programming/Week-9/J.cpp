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

    int cs = 1;
    while (1)
    {
        int n, q; cin >> n >> q;
        if(n == 0 && q == 0) break;

        cout << "CASE# " << cs << ":" << nl;
        cs++;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        while (q--)
        {
            int key;
            cin >> key;
            int l = 0, r = a.size() - 1, mid, ans = 0;
            bool ok = false;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (key == a[mid])
                {
                    ans = mid+1;
                    ok = true;
                    r = mid - 1;
                }

                if (key > a[mid])
                    l = mid + 1;
                else
                    r = mid - 1;
            }

            if (ok)
                cout << key << " found at " << ans << nl;
            else
                cout << key << " not found" << nl;
        }
    }

    return 0;
}