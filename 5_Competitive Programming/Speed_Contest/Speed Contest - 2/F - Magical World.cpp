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
        int a, b, x;
        cin >> a >> b >> x;

        ll v = x * x;
        ll area = a * b;

        if (v >= area)
        {
            cout << 0 << "\n";
        }
        else if (a <= v / b || b <= v / a)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}