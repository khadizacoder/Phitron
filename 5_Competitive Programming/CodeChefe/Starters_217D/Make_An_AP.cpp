// 1) সব gap বের করো
// 2) gap গুলোর gcd বের করো
// 3) প্রতিটি gap এর জন্য diff/gcd - 1 যোগ করো

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

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);

        for(int &i : a) cin >> i;

        ll d = 0;
        for(int i = 1; i < n; i++)
        {
            d = gcd(d, a[i] - a[i-1]);
        }

        ll ans = 0;
        for(int i = 1; i < n; i++)
        {
            ll deff = a[i] - a[i-1];
            ans += deff / 2 -1;
        }
        cout << ans << nl;
    }

    return 0;
}