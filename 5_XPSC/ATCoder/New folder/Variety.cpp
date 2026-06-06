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

    int n, color, val;
    cin >> n >> color >> val;
    vector<pair<int,int>> a;
    for(int i = 0; i < n; i++)
    {
        int c, v; cin >> c >> v;
        a.push_back({v, c});
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++)
    {
        cout << a[i].first << " -> " << a[i].second << nl;
    }

    return 0;
}