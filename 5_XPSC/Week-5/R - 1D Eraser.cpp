// Problem Link: https://codeforces.com/problemset/problem/1873/D
// Topic : single pointer traversal

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, sum = 0;
        while (l < n)
        {
            if (s[l] == 'B')
            {
                sum += 1;
                l += k;
            }
            else
            {
                l++;
            }
        }
        cout << sum << nl;
    }
    return 0;
}