#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int v = x + z;
    if(v < y)
    {
        cout << 0 << nl;
    }
    else
    {
        int x = v - y;
        cout << x + 1 << nl;
    }
    return 0;
}