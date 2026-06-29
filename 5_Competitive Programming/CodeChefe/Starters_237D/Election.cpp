#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int  v = (n / 2) + 1;
    if(k < v)
        cout << v - k << nl;
    else cout << 0 << nl;

    return 0;
}