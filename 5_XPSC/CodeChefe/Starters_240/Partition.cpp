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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> fre;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            fre[x]++;
        }

       ll mx = 0;
       for(auto& it : fre)
       {
            mx = max(mx, it.second);
       }

       cout << n - mx + 1 << nl;
    }

    return 0;
}