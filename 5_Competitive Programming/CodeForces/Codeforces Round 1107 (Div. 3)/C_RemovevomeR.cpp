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
        int n;
        string s;
        cin >> n >> s;

        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                cnt++;
        }

        if (cnt != 2)
            cout << 1 << nl;
        else
            cout << 2 << nl;

    }

    return 0;
}