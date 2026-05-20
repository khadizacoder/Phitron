// Problem link: https://www.codechef.com/problems/COLORB

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    int r, b;
    cin >> r >> b;

    int green = min(r, b);

    if (r == b)
    {
        cout << r * 5 << nl;
        return 0;
    }

    if (r > b)
    {
        cout << (green * 5) + ((r - green) * 1);
    }
    else
        cout << (green * 5) + ((b - green) * 2);

    return 0;
}