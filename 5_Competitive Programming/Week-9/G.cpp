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

    int n; cin >> n;
    vector<int> a(n), prefix(n+1);
    for(int &i : a) cin >> i;

    for(int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1]+a[i-1];

    // for(auto i : prefix) cout << i << " ";

    int q; cin >> q;
    while(q--)
    {
        int key; cin >> key;
        auto it = lower_bound(prefix.begin(), prefix.end(), key);
        cout << it - prefix.begin() << nl;
    }

    return 0;
}